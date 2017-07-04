[Rainmeter]
	ContextTitle   =Small
	ContextAction  =[!SetOption Game W "#SmallW#"][!SetOption Game H "#SmallH#"][!UpdateMeter Game][!Redraw]
	ContextTitle2  =Large
	ContextAction2 =[!SetOption Game W "#LargeW#"][!SetOption Game H "#LargeH#"][!UpdateMeter Game][!Redraw]

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
W=#SmallW#
H=#SmallH#
; W=#LargeW#
; H=#LargeH#
SolidColor=0,0,0,50
ImageTint=#Unlit#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "#Lit#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint "#Unlit#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Solid=1