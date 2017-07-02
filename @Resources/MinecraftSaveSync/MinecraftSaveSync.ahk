#NoEnv  						; Recommended for performance and compatibility with future AutoHotkey releases.
; #Warn							; Enable warnings to assist with detecting common errors.
; SendMode Input					; Recommended for new scripts due to its superior speed and reliability.
Menu, Tray, Icon, C:\git\AutoHotkey\icons\Minecraft.ico
#Include C:\git\AutoHotkey\scripts\Functions.ahk			; Imports the Fuctions script

minecraftSaveSync("MyWorld")
ExitApp