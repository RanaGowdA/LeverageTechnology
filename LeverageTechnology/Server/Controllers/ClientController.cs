using LeverageTechnology.Server.Data;
using LeverageTechnology.Shared;
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
        public async Task<List<CaseStudy>> GetCaseStudy()
        {
            return await _context.GetCaseStudy();
        }

        [HttpGet("GI")]
        public async Task<List<Intro>> GetrIntro()
        {
            return await _context.GetrIntro();
        }

        [HttpGet("GET")]
        public async Task<List<ExpTable>> GetExpTables()
        {
            return await _context.GetExpTables();
        }

    }
}
