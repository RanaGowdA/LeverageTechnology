using LeverageTechnology.Server.Data;
using LeverageTechnology.Shared;
using LeverageTechnology.Shared.Models.DTOs;
using Microsoft.AspNetCore.Mvc;

namespace LeverageTechnology.Server.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class ClientController : ControllerBase
    {
        private readonly IClientRepo _context;
        public ClientController(IClientRepo context)
        {
            _context = context;
        }

        [HttpGet("GCS")]
        public async Task<List<CaseStudy>> GetCaseStudies()
        {
            return await _context.GetCaseStudy();
        }

        [HttpGet("GI")]
        public async Task<List<Intro>> GetIntros()
        {
            return await _context.GetrIntro();
        }

        [HttpGet("GET")]
        public async Task<List<ExpTable>> GetExpTables()
        {
            return await _context.GetExpTables();
        }


        [HttpPost("ACS")]
        public async Task<bool> AddCaseStudy(CaseStudy caseStudy)
        {
            return await _context.AddCaseStudy(caseStudy);
        }

        [HttpPost("AI")]
        public async Task<bool> AddIntro(Intro intro)
        {
            return await _context.AddIntro(intro);
        }

        [HttpPost("AET")]
        public async Task<bool> AddExpTables(ExpTable expTable)
        {
            return await _context.AddExpTables(expTable);
        }


        [HttpPost("ECS")]
        public async Task<bool> EditCaseStudy(CaseStudy caseStudy)
        {
            return await _context.EditCaseStudy(caseStudy);
        }

        [HttpPost("EI")]
        public async Task<bool> EditIntro(Intro intro)
        {
            return await _context.EditIntro(intro);
        }

        [HttpPost("EET")]
        public async Task<bool> EditExpTables(ExpTable expTable)
        {
            return await _context.EditExpTables(expTable);
        }


        [HttpPost("DCS")]
        public async Task<bool> DeleteCaseStudy(DataIdDTO dataIdDTO)
        {
            return await _context.DeleteCaseStudy(dataIdDTO.Id);
        }

        [HttpPost("DI")]
        public async Task<bool> DeleteIntro(DataIdDTO dataIdDTO)
        {
            return await _context.DeleteIntro(dataIdDTO.Id);
        }

        [HttpPost("DET")]
        public async Task<bool> DeleteExpTables(DataIdDTO dataIdDTO)
        {
            return await _context.DeleteExpTables(dataIdDTO.Id);
        }

    }
}
