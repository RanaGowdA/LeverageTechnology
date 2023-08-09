using LeverageTechnology.Shared;
using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Caching.Memory;

namespace LeverageTechnology.Server.Data
{
    public class ClientRepo : IClientRepo
    {
        private readonly AdminDbContext _context;
        private readonly IMemoryCache _cache;

        public ClientRepo(AdminDbContext context, IMemoryCache cache)
        {
            _context = context;
            _cache = cache;

        }
        public async Task<List<CaseStudy>> GetCaseStudy()
        {
            return await _context.CaseStudies.ToListAsync();
        }

        public async Task<List<ExpTable>> GetExpTables()
        {
            return await _context.ExpTables.ToListAsync();
        }

        public async Task<List<Intro>> GetrIntro()
        {
            return await _context.Intros.ToListAsync();
        }
    }
}
