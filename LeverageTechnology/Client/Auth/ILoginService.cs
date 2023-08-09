using LeverageTechnology.Shared;

namespace LeverageTechnology.Client
{
    public interface ILoginService
    {
        Task Login(LoginResultDto dto);
        Task Logout();
    }
}
