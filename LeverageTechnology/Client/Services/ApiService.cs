
using LeverageTechnology.Shared;
using LeverageTechnology.Shared.Models;
using LeverageTechnology.Shared.Models.DTOs;

namespace LeverageTechnology.Client
{
    public class ApiService
    {
        private readonly IHttpService _httpService;


        public List<CaseStudy> CaseStudies { get; set; }
        public List<ExpTable> ExpTables { get; set; }
        public List<Intro> Intros { get; set; }


        public ApiService(IHttpService httpService)
        {
            _httpService = httpService;
        }

        public async Task<bool> SyncData()
        {
            await GetCaseStudy();
            await GetExpTables();
            await GetrIntro();

            return true;
        }

        public async Task<LoginResultDto> LoginUser(LoginDto dto)
        {
            var httpResponse = await _httpService.Post<LoginDto, LoginResultDto>(
                "/api/identity/login", dto);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }


        public async Task<LoginResultDto> Register(RegisterDto dto)
        {
            var httpResponse = await _httpService.Post<RegisterDto, LoginResultDto>(
                "/api/identity/register", dto);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }


        public async Task<List<CaseStudy>> GetCaseStudy()
        {
            var httpResponse = await _httpService.GetHttpResponseWrapper<List<CaseStudy>>("/api/Client/GCS");

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            CaseStudies = httpResponse.Response;
            return httpResponse.Response;
        }

        public async Task<List<Intro>> GetrIntro()
        {
            var httpResponse = await _httpService.GetHttpResponseWrapper<List<Intro>>("/api/Client/GI");

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());

            Intros = httpResponse.Response;
            return httpResponse.Response;
        }

        public async Task<List<ExpTable>> GetExpTables()
        {
            var httpResponse = await _httpService.GetHttpResponseWrapper<List<ExpTable>>("/api/Client/GET");

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());

            ExpTables = httpResponse.Response;
            return httpResponse.Response;
        }

        public async Task<List<AppUser>> GetUsers()
        {
            var httpResponse = await _httpService.GetHttpResponseWrapper<List<AppUser>>("/api/Identity/GUS");

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());

            return httpResponse.Response;
        }


        public async Task<List<AppRole>> GetRoles()
        {
            var httpResponse = await _httpService.GetHttpResponseWrapper<List<AppRole>>("/api/Identity/GRS");

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());

            return httpResponse.Response;
        }



        public async Task<bool> AddCaseStudy(CaseStudy caseStudy)
        {
            var httpResponse = await _httpService.Post<CaseStudy, bool>(
               "/api/Client/ACS", caseStudy);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }


        public async Task<bool> AddExTable(ExpTable expTable)
        {
            var httpResponse = await _httpService.Post<ExpTable, bool>(
               "/api/Client/AET", expTable);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }


        public async Task<bool> AddIntro(Intro intro)
        {
            var httpResponse = await _httpService.Post<Intro, bool>(
               "/api/Client/AI", intro);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }



        public async Task<bool> EditCaseStudy(CaseStudy caseStudy)
        {
            var httpResponse = await _httpService.Post<CaseStudy, bool>(
               "/api/Client/ECS", caseStudy);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }


        public async Task<bool> EditExTable(ExpTable expTable)
        {
            var httpResponse = await _httpService.Post<ExpTable, bool>(
               "/api/Client/EET", expTable);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }


        public async Task<bool> EditIntro(Intro intro)
        {
            var httpResponse = await _httpService.Post<Intro, bool>(
               "/api/Client/EI", intro);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }


        public async Task<bool> DeleteCaseStudy(DataIdDTO dataIdDTO)
        {
            var httpResponse = await _httpService.Post<DataIdDTO, bool>(
               "/api/Client/DCS", dataIdDTO);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }


        public async Task<bool> DeleteExTable(DataIdDTO dataIdDTO)
        {
            var httpResponse = await _httpService.Post<DataIdDTO, bool>(
               "/api/Client/DET", dataIdDTO);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }


        public async Task<bool> DeleteIntro(DataIdDTO dataIdDTO)
        {
            var httpResponse = await _httpService.Post<DataIdDTO, bool>(
               "/api/Client/DI", dataIdDTO);

            if (!httpResponse.Success)
                throw new ApplicationException(await httpResponse.GetBody());
            return httpResponse.Response;
        }

        
        public async Task<bool> DeleteUser(RegisterDto registerDTO)
        {           

            var httpResponse = await _httpService.Post<RegisterDto, bool>(
                "/api/Identity/deleteuser", registerDTO);  

            if (!httpResponse.Success)
            {
               throw new ApplicationException(await httpResponse.GetBody());
            }

            return httpResponse.Response;
        }

        
        public async Task<bool> ResetPassword(RegisterDto Rdto)
        {
            var httpResponse = await _httpService.Post<RegisterDto, bool>(
                "/api/identity/resetpassword", Rdto);

            if (!httpResponse.Success)
            {
                throw new ApplicationException(await httpResponse.GetBody());
            }

            return httpResponse.Response;
        }







    }
}
