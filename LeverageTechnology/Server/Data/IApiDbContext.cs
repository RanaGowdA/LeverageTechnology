


using LeverageTechnology.Shared;

namespace LeverageTechnology.Server.Data
{
    public interface IApiDbContext
    {
        Task<AppUser> GetAppUserByUsername(string username);
    }
}
