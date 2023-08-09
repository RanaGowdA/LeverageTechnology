using LeverageTechnology.Server;
using LeverageTechnology.Server.Data;
using LeverageTechnology.Server.Services;
using LeverageTechnology.Shared;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Identity;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Microsoft.VisualBasic;
using System.Data;

namespace LeverageTechnology.Server.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class IdentityController : ControllerBase
    {
        private readonly IApiDbContext _context;
        private readonly SignInManager<AppUser> _signInManager;
        private readonly RoleManager<AppRole> _roleManager;
        private readonly UserManager<AppUser> _userManager;
        private readonly IConfiguration _configuration;

        public IdentityController(IApiDbContext context, SignInManager<AppUser> signInManager,
            RoleManager<AppRole> roleManager,
            UserManager<AppUser> userManager, IConfiguration configuration)
        {
            _context = context;
            _signInManager = signInManager;
            _roleManager = roleManager;
            _userManager = userManager;
            _configuration = configuration;
        }



        //[HttpGet("seed")]
        //public async Task<LoginResultDto> Seed()
        //{
        //    var dto = new RegisterDto()
        //    {
        //        FirstName = "Rana",
        //        LastName = "Gowd",
        //        Password = "Password@123",
        //        UserName = "rana",
        //    };

        //    //var appRole = new AppRole() { Name = RoleConstants.SuperAdminRole };
        //    //var result1 = await _roleManager.CreateAsync(appRole);
        //    //var appRole2 = new AppRole() { Name = RoleConstants.AdminRole };
        //    //var result2 = await _roleManager.CreateAsync(appRole2);
        //    //var appRole3 = new AppRole() { Name = RoleConstants.UserRole };
        //    //var result3 = await _roleManager.CreateAsync(appRole3);

        //    var appUser = new AppUser()
        //    {
        //        UserName = dto.UserName,
        //        FirstName = dto.FirstName,
        //        LastName = dto.LastName,
        //        PhoneNumber = dto.UserName
        //    };

        //    var result = await _userManager.CreateAsync(appUser);
        //    if (result.Succeeded)
        //    {
        //        var passResult = await _userManager.AddPasswordAsync(appUser, dto.Password);
        //        if (passResult.Succeeded)
        //        {
        //            var appUserFromDb = await _context.GetAppUserByUsername(dto.UserName);

        //            var roleResult = await _userManager.AddToRoleAsync(appUserFromDb, RoleConstants.UserRole);

        //            if (roleResult.Succeeded)
        //            {
        //                var token = JwtHelper.GenerateJwtToken(
        //                    appUserFromDb.UserName,
        //                    new List<string> { RoleConstants.UserRole },
        //                    _configuration["Jwt:Key"],
        //                    _configuration["Jwt:Issuer"],
        //                    validDays: 90);

        //                return new LoginResultDto
        //                {
        //                    Id = appUserFromDb.Id,
        //                    Succeeded = true,
        //                    Name = $"{appUserFromDb.FirstName} {appUserFromDb.LastName}",
        //                    Token = token
        //                };
        //            }
        //            else
        //            {
        //                var appUserFromDbWithoutRole = await _context.GetAppUserByUsername(dto.UserName);
        //                await _userManager.DeleteAsync(appUserFromDbWithoutRole);

        //                return new LoginResultDto
        //                {
        //                    Succeeded = false,
        //                    Error = "Role could'nt be assigned"
        //                };
        //            }
        //        }
        //        else
        //        {
        //            var appUserFromDB = await _context.GetAppUserByUsername(dto.UserName);
        //            await _userManager.DeleteAsync(appUserFromDB);

        //            return new LoginResultDto
        //            {
        //                Succeeded = false,
        //                Error = "Password Error"
        //            };
        //        }
        //    }

        //    return new LoginResultDto
        //    {
        //        Succeeded = false,
        //        Error = $"Error! {string.Join(", ", result.Errors.Select(e => e.Description))}"
        //    };
        //}

        [HttpPost("createrole")]
        public async Task<bool> CreateRole(RoleCreateDto dto)
        {
            var appRole = new AppRole() { Name = dto.RoleName };
            var result = await _roleManager.CreateAsync(appRole);

            return result.Succeeded;
        }

        [AllowAnonymous]
        [HttpPost("register")]
        public async Task<LoginResultDto> Register(RegisterDto dto)
        {
            if (dto is null)
            {
                return new LoginResultDto
                {
                    Succeeded = false,
                    Error = "Invalid inputs"
                };
            }

            var appUser = new AppUser()
            {
                UserName = dto.UserName,
                FirstName = dto.FirstName,
                LastName = dto.LastName,
                PhoneNumber = dto.UserName
            };

            var result = await _userManager.CreateAsync(appUser);
            if (result.Succeeded)
            {
                var passResult = await _userManager.AddPasswordAsync(appUser, dto.Password);
                if (passResult.Succeeded)
                {
                    var appUserFromDb = await _context.GetAppUserByUsername(dto.UserName);

                    var roleResult = await _userManager.AddToRoleAsync(appUserFromDb, RoleConstants.UserRole);

                    if (roleResult.Succeeded)
                    {
                        var token = JwtHelper.GenerateJwtToken(
                            appUserFromDb.UserName,
                            new List<string> { RoleConstants.UserRole },
                            _configuration["Jwt:Key"],
                            _configuration["Jwt:Issuer"],
                            validDays: 90);

                        return new LoginResultDto
                        {
                            Id = appUserFromDb.Id,
                            Succeeded = true,
                            Name = $"{appUserFromDb.FirstName} {appUserFromDb.LastName}",
                            Token = token
                        };
                    }
                    else
                    {
                        var appUserFromDbWithoutRole = await _context.GetAppUserByUsername(dto.UserName);
                        await _userManager.DeleteAsync(appUserFromDbWithoutRole);

                        return new LoginResultDto
                        {
                            Succeeded = false,
                            Error = "Role could'nt be assigned"
                        };
                    }
                }
                else
                {
                    var appUserFromDB = await _context.GetAppUserByUsername(dto.UserName);
                    await _userManager.DeleteAsync(appUserFromDB);

                    return new LoginResultDto
                    {
                        Succeeded = false,
                        Error = "Password Error"
                    };
                }
            }

            return new LoginResultDto
            {
                Succeeded = false,
                Error = $"Error! {string.Join(", ", result.Errors.Select(e => e.Description))}"
            };
        }

        [HttpDelete("deleteuser")]
        public async Task<IActionResult> DeleteUser(RegisterDto dto)
        {
            var userToDelete = await _userManager.FindByNameAsync(dto.UserName);
            if (userToDelete == null)
            {
                return NotFound($"User with username '{dto.UserName}' not found.");
            }

            var result = await _userManager.DeleteAsync(userToDelete);
            if (result.Succeeded)
            {
                return Ok($"User '{dto.UserName}' has been deleted.");
            }

            return BadRequest(result.Errors);
        }

        [AllowAnonymous]
        [HttpPost("login")]
        public async Task<LoginResultDto> Login(LoginDto input)
        {
            var result = await _signInManager.PasswordSignInAsync(input.Username, input.Password, false, true);

            if (result.Succeeded)
            {
                return await GetLoginSuccessResult(input.Username);
            }

            return new LoginResultDto
            {
                Succeeded = false,
                Error = "Incorrect Username or Password",
            };
        }

        private async Task<LoginResultDto> GetLoginSuccessResult(string username)
        {
            var user = await _context.GetAppUserByUsername(username);

            var rolesList = await _userManager.GetRolesAsync(user);
            var roles = rolesList.ToList();

            var token = JwtHelper.GenerateJwtToken(
                username,
                roles,
                _configuration["Jwt:Key"],
                _configuration["Jwt:Issuer"],
                validDays: 90);

            return new LoginResultDto
            {
                Succeeded = true,
                Name = $"{user.FirstName} {user.LastName}",
                Token = token,
            };
        }
    }
}

