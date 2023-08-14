using LeverageTechnology.Shared;

namespace LeverageTechnology.Server.Data
{
    public interface IClientRepo
    {
        Task<List<CaseStudy>> GetCaseStudy();
        Task<List<Intro>> GetrIntro();
        Task<List<ExpTable>> GetExpTables();

        Task<bool> AddCaseStudy(CaseStudy caseStudy);
        Task<bool> AddIntro(Intro intro);
        Task<bool> AddExpTables(ExpTable expTable);

        Task<bool> EditCaseStudy(CaseStudy caseStudy);
        Task<bool> EditIntro(Intro intro);
        Task<bool> EditExpTables(ExpTable expTable);

        Task<bool> DeleteCaseStudy(int Id);
        Task<bool> DeleteIntro(int Id);
        Task<bool> DeleteExpTables(int Id);

    }
}
