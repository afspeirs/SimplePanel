; [Rainmeter]
; 	RightMouseUpAction=!SkinCustomMenu
; 	ContextTitle=Open Settings 
; 	ContextAction=[!ActivateConfig "#ROOTCONFIG#\Settings" "Settings.ini"]

;===========================================================================================
;====  Variables  ==========================================================================
;===========================================================================================

[Variables]
	BarW        = 250
	Font        = Bebas Neue Bold
	FontLight   = Bebas Neue Regular
	Font3       = Roboto Lt
	FontSize    = 27
	xOffset     = 30


;===========================================================================================
;====  Colours  ============================================================================
;===========================================================================================

	MainColour  = FF8000
	FontColour  = FCFCFC
	BackColour  = 0,0,0,150
	BarColour   = 0,0,0,110


;===========================================================================================
;====  Player  =============================================================================
;===========================================================================================

	PlayerName = CAD


;==================================================================================
;==   HDDs   ======================================================================
;==================================================================================

	Disk1		= C
	Disk2		= F
	Disk3		= G


;==================================================================================
;==   Weather   ===================================================================
;==================================================================================

Location	= poynton
Units		= c


;===========================================================================================
;====  DO NOT EDIT BELOW HERE  =============================================================
;===========================================================================================

	TaskbarHeight 	= (#SCREENAREAHEIGHT#-#WORKAREAHEIGHT#)
	TaskbarWidth	= (#SCREENAREAWIDTH#-#WORKAREAWIDTH#)
	LocationX		= (#WORKAREAWIDTH#-#BarW#)
	LocationTaskbar = (#SCREENAREAY#+(#SCREENAREAHEIGHT#)-(#TaskbarHeight#))

	ClockH		=104
	CalenderH	=100
	DiskH 		=45
	SystemH		=80
	NetworkH	=80
	WeatherH	=119

	LocationY1  =0
	LocationY2  =(#LocationY1#+#ClockH#)
	LocationY3  =(#LocationY2#+#CalenderH#)
	LocationY4  =(#LocationY3#+#SystemH#)
	LocationY5  =(#LocationY4#+#DiskH#)
	LocationY6  =(#LocationY5#+#DiskH#)
	LocationY7  =(#LocationY6#+#DiskH#)
	LocationY8  =(#LocationY7#+#WeatherH#)

	LocationYCalender =#LocationY2#
	LocationYClock    =#LocationY1#
	LocationYDisk1    =#LocationY4#
	LocationYDisk2    =#LocationY5#
	LocationYDisk3    =#LocationY6#
	LocationYNetwork  =#LocationY8#
	LocationYSystem   =#LocationY3#
	LocationYWeather  =#LocationY7#


;===========================================================
;====  End  ================================================
;===========================================================
