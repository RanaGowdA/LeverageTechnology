using MudBlazor;

namespace  LeverageTechnology.Client.Utility
{
    public static class DialogSettings
    {

        public static DialogOptions DialogOptionsAddEditLead = new DialogOptions()
        {
            MaxWidth = MaxWidth.ExtraLarge,
            FullWidth = true,
            CloseButton = true,
            DisableBackdropClick = true,
            Position = DialogPosition.TopCenter
        };
    }
}
