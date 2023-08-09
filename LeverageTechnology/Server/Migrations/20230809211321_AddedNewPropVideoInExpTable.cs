using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace LeverageTechnology.Server.Migrations
{
    public partial class AddedNewPropVideoInExpTable : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<string>(
                name: "Video",
                table: "ExpTables",
                type: "TEXT",
                nullable: false,
                defaultValue: "");
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "Video",
                table: "ExpTables");
        }
    }
}
