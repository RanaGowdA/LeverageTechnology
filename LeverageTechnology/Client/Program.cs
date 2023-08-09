using Blazored.LocalStorage;
using LeverageTechnology;
using LeverageTechnology.Client;
using Microsoft.AspNetCore.Components.Authorization;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using MudBlazor.Services;
using System.Text.Json;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddMudServices();

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) }); 

builder.Services.AddAuthorizationCore(options =>
{
    options.FallbackPolicy = options.DefaultPolicy;
});

builder.Services.AddScoped<IHttpService, HttpService>();

builder.Services.AddScoped<ApiService>();

builder.Services.AddScoped<JwtAuthenticationStateProvider>();

builder.Services.AddScoped<AuthenticationStateProvider, JwtAuthenticationStateProvider>(
                provider => provider.GetRequiredService<JwtAuthenticationStateProvider>());

builder.Services.AddScoped<ILoginService, JwtAuthenticationStateProvider>(
    provider => provider.GetRequiredService<JwtAuthenticationStateProvider>());

builder.Services.AddBlazoredLocalStorage(config =>
{
    config.JsonSerializerOptions.DictionaryKeyPolicy = JsonNamingPolicy.CamelCase;
    config.JsonSerializerOptions.IgnoreNullValues = true;
    config.JsonSerializerOptions.IgnoreReadOnlyProperties = true;
    config.JsonSerializerOptions.PropertyNameCaseInsensitive = true;
    config.JsonSerializerOptions.PropertyNamingPolicy = JsonNamingPolicy.CamelCase;
    config.JsonSerializerOptions.ReadCommentHandling = JsonCommentHandling.Skip;
    config.JsonSerializerOptions.WriteIndented = false;
});
await builder.Build().RunAsync();
