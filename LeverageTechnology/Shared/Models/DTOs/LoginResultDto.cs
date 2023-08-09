using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LeverageTechnology.Shared
{
    public class LoginResultDto
    {
        public string Id { get; set; }
        public string Name { get; set; }
        public string Token { get; set; }
        public bool Succeeded { get; set; }
        public string Error { get; set; }
    }
}
