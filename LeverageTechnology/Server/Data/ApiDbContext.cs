using LeverageTechnology.Server.Data;
using LeverageTechnology.Shared;
using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Caching.Memory;

namespace LeverageTechnology.Server.Data
{
    public class ApiDbContext : IApiDbContext
    {
        private readonly AdminDbContext _context;
        private readonly IMemoryCache _cache;

        public ApiDbContext(AdminDbContext context, IMemoryCache cache)
        {
            _context = context;
            _cache = cache;
        }

        public async Task<List<AppRole>> GetAllRoles()
        {
            return await _context.AppRole.ToListAsync();
        }

        public async Task<List<AppUser>> GetAllUsers()
        {
            return await _context.AppUser.ToListAsync();
        }

        public async Task<AppUser> GetAppUserByUsername(string username)
        {
            var appUser = await _context.Users.FirstOrDefaultAsync(au => au.UserName == username);
            return appUser;
        }

    }
}

