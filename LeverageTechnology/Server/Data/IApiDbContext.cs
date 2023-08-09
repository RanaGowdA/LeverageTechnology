


using LeverageTechnology.Shared;

namespace LeverageTechnology.Server.Data
{
    public interface IApiDbContext
    {
        Task<AppUser> GetAppUserByUsername(string username);
        Task<List<AppUser>> GetAllUsers();
        Task<List<AppRole>> GetAllRoles();
    }
}
