[Rainmeter]
	ContextTitle   =Small
	ContextAction  =[!WriteKeyValue "Game" "W" "#SmallW#" "#@#Variables_Games.inc"][!WriteKeyValue "Game" "H" "#SmallH#" "#@#Variables_Games.inc"][!RefreshApp]
	ContextTitle2  =Large
	ContextAction2 =[!WriteKeyValue "Game" "W" "#LargeW#" "#@#Variables_Games.inc"][!WriteKeyValue "Game" "H" "#LargeH#" "#@#Variables_Games.inc"][!RefreshApp]

;==================================================================================
;==   Variables   =================================================================
;==================================================================================

[Variables]
Lit         = 255,255,255,255
Unlit       = 180,180,180,200
LargeW      = 279
LargeH      = 130
SmallW      = (460/1.84)
SmallH      = (215/1.84)
Location    =C:\Users\Andy\OneDrive\
LocationPC  =G:\OneDrive\
Games       =Multimedia\OblyTile\Games\
Nintendo    =Multimedia\OblyTile\Games\Nintendo\
Sony        =Multimedia\OblyTile\Games\PS1\
Windows     =Multimedia\OblyTile\Games\Windows\
GC          =Multimedia\ROMs\GC\_scripts\
Wii         =Multimedia\ROMs\Wii\_scripts\
PS1         =Multimedia\ROMs\PS1\_scripts\

[MeasureSkinName]
Measure=Time
Format=#CURRENTFILE#
Substitute=".ini":""
UpdateDivider=-1

[Game]
Meter=Image
X=0
Y=0
W=250
H=116.84783
; W=#SmallW#
; H=#SmallH#
; W=#LargeW#
; H=#LargeH#
SolidColor=0,0,0,50
ImageTint=#Unlit#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "#Lit#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint "#Unlit#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Solid=1
