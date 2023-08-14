using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json.Serialization;
using System.Threading.Tasks;

namespace LeverageTechnology.Shared.Models.DTOs
{
    public class DataIdDTO
    {
        [JsonPropertyName("id")]
        public int Id { get; set; }
    }
}
