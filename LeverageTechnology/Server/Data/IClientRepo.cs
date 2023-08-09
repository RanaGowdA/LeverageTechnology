using LeverageTechnology.Shared;

namespace LeverageTechnology.Server.Data
{
    public interface IClientRepo
    { 
        Task<List<CaseStudy>> GetCaseStudy();
        Task<List<Intro>> GetrIntro();
        Task<List<ExpTable>> GetExpTables();
    }
}
