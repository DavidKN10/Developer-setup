# Instructions
Make sure winget is installed first

## `settings.json`
To find the `settings.json` file, open settings in Terminal and go to "Open JSON file".

Copy the `settings.json` from this repo. Make sure to include any addiontal profiles that you had in the profiles list.

Make sure to set a background image for the PowerShell profile in `backgroundImage`.

## Packages

PSReadLine
```powershell
Install-Module -Name PSReadLine -AllowClobber -Force
```

Fd
```powershell
winget install sharkdp.fd
```
Fzf
```powershell
winget install -e --id junegunn.fzf
```
