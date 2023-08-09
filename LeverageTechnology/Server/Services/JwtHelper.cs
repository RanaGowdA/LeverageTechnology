using Microsoft.IdentityModel.Tokens;
using System.IdentityModel.Tokens.Jwt;
using System.Security.Claims;
using System.Text;

namespace LeverageTechnology.Server.Services
{
    public static class JwtHelper
    {
        public static string GenerateJwtToken(
            string username,
            List<string> roles,
            string privateKey,
            string issuer,
            int validDays)
        {
            var claims = new List<Claim>
                {
                    new Claim(ClaimTypes.Name, username)
                };

            foreach (var role in roles)
            {
                claims.Add(new Claim(ClaimTypes.Role, role));
            }

            var tokenHandler = new JwtSecurityTokenHandler();
            var key = Encoding.UTF8.GetBytes(privateKey);

            var token = new JwtSecurityToken(
                issuer: issuer,
                claims: claims,
                notBefore: DateTime.UtcNow,
                expires: DateTime.UtcNow.AddDays(validDays),
                signingCredentials: new SigningCredentials(
                    new SymmetricSecurityKey(key), SecurityAlgorithms.HmacSha256Signature)
            );

            return tokenHandler.WriteToken(token);
        }
    }
}
