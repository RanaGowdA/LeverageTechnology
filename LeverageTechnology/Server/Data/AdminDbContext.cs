using LeverageTechnology.Shared;
using Microsoft.AspNetCore.Identity.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore;

namespace LeverageTechnology.Server.Data
{
    public class AdminDbContext : IdentityDbContext<AppUser>
    {
        public AdminDbContext(DbContextOptions<AdminDbContext> options) : base(options)
        {
        }
        public DbSet<AppRole> AppRole { get; set; }
        public DbSet<AppUser> AppUser { get; set; }
        public DbSet<CaseStudy> CaseStudies { get; set; }
        public DbSet<ExpTable> ExpTables { get; set; }
        public DbSet<Intro> Intros { get; set; }

    }
}
