using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace LeverageTechnology.Server.Migrations
{
    public partial class infoModelUpdated : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<string>(
                name: "Introduction",
                table: "Intros",
                type: "TEXT",
                nullable: false,
                defaultValue: "");
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "Introduction",
                table: "Intros");
        }
    }
}
