using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LeverageTechnology.Shared.Models
{
    public class ApiResponse<T>
    {
        public ApiResponse(T response, string error)
        {
            Response = response;
            Error = error;
            Success = error == null;
        }

        public T Response { get; }
        public string Error { get; }
        public bool Success { get; }
    }
}

