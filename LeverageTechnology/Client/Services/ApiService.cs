
using LeverageTechnology.Shared;

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

        public async Task<LoginResultDto> LoginUser(LoginDto dto)
        {
            var httpResponse = await _httpService.Post<LoginDto, LoginResultDto>(
                "/api/identity/login", dto);

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
    }
}
