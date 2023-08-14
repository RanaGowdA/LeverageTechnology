using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace LeverageTechnology.Server.Migrations
{
    public partial class removedImage : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "Image",
                table: "CaseStudies");
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<string>(
                name: "Image",
                table: "CaseStudies",
                type: "TEXT",
                nullable: false,
                defaultValue: "");
        }
    }
}
