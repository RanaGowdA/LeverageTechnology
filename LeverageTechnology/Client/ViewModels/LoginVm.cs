using System.ComponentModel.DataAnnotations;

namespace LeverageTechnology.Client
{
    public class LoginVm
    {
        [Required]
        public string Username { get; set; }

        [Required]
        public string Password { get; set; }
    }
}
