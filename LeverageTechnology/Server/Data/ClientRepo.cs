using LeverageTechnology.Client.Pages.AdminVc;
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

        public async Task<bool> AddCaseStudy(CaseStudy caseStudy)
        {
            await _context.CaseStudies.AddAsync(caseStudy);
            var result = await _context.SaveChangesAsync();
            return result > 0;
        }

        public async Task<bool> AddExpTables(ExpTable expTable)
        {
            await _context.ExpTables.AddAsync(expTable);
            var result = await _context.SaveChangesAsync();
            return result > 0;
        }

        public async Task<bool> AddIntro(Intro intro)
        {
            await _context.Intros.AddAsync(intro);
            var result = await _context.SaveChangesAsync();
            return result > 0;
        }

        public async Task<bool> DeleteCaseStudy(int Id)
        {
            var existingCaseStudy = _context.CaseStudies.FirstOrDefault(x => x.Id == Id);
            if (existingCaseStudy != null)
            {
                _ = _context.CaseStudies.Remove(existingCaseStudy);
                var result = await _context.SaveChangesAsync();
                return result > 0;
            }
            return false;
        }

        public async Task<bool> DeleteExpTables(int Id)
        {
            var existingExpTables = _context.ExpTables.FirstOrDefault(x => x.Id == Id);
            if (existingExpTables != null)
            {
                _ = _context.ExpTables.Remove(existingExpTables);
                var result = await _context.SaveChangesAsync();
                return result > 0;
            }
            return false;
        }

        public async Task<bool> DeleteIntro(int Id)
        {
            var existingIntros = _context.Intros.FirstOrDefault(x => x.Id == Id);
            if (existingIntros != null)
            {
                _ = _context.Intros.Remove(existingIntros);
                var result = await _context.SaveChangesAsync();
                return result > 0;
            }
            return false;
        }

        public async Task<bool> EditExpTables(ExpTable expTable)
        {
            var savedexpTable = await _context.ExpTables.Where(s => s.Id == expTable.Id).FirstOrDefaultAsync();
            if (savedexpTable != null)
            {
                try
                {
                    _context.Entry(savedexpTable).CurrentValues.SetValues(expTable);
                    var result = await _context.SaveChangesAsync();
                    if (result > 0)
                    {
                        return true;
                    }
                }
                catch (Exception e)
                {
                    return false;
                }
            }
            return false;
        }

        public async Task<bool> EditCaseStudy(CaseStudy caseStudy)
        {
            var savedcaseStudy = await _context.CaseStudies.Where(s => s.Id == caseStudy.Id).FirstOrDefaultAsync();
            if (savedcaseStudy != null)
            {
                try
                {
                    _context.Entry(savedcaseStudy).CurrentValues.SetValues(caseStudy);
                    var result = await _context.SaveChangesAsync();
                    if (result > 0)
                    {
                        return true;
                    }
                }
                catch (Exception e)
                {
                    return false;
                }
            }
            return false;
        }

        public async Task<bool> EditIntro(Intro intro)
        {
            var savedintro = await _context.Intros.Where(s => s.Id == intro.Id).FirstOrDefaultAsync();
            if (savedintro != null)
            {
                try
                {
                    _context.Entry(savedintro).CurrentValues.SetValues(intro);
                    var result = await _context.SaveChangesAsync();
                    if (result > 0)
                    {
                        return true;
                    }
                }
                catch (Exception e)
                {
                    return false;
                }
            }
            return false;
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
