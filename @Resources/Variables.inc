[Rainmeter]
	; RightMouseUpAction=!SkinCustomMenu
	ContextTitle=Open Settings
	ContextAction=[!ActivateConfig "#ROOTCONFIG#\Settings" "Settings.ini"]
	DynamicVaribles=1

;===========================================================================================
;====  Variables  ==========================================================================
;===========================================================================================

[Variables]
	MainColour  =FF8000
	FontColour  =FCFCFC
	PlayerName  =Spotify
	Location    =Poynton
	Unit        =C
	Disk1       =C
	Disk2       =N
	Disk3       =O

	BarW        = 250
	Font        = Bebas Neue Bold
	FontLight   = Bebas Neue Regular
	Font3       = Roboto Lt
	FontSize    = 27
	xOffset     = 30
	BackColour  = 0,0,0,1
	BarColour   = 0,0,0,110


;===========================================================================================
;====  DO NOT EDIT BELOW HERE  =============================================================
;===========================================================================================

	TaskbarHeight   = (#SCREENAREAHEIGHT# - #WORKAREAHEIGHT#)
	TaskbarWidth    = (#SCREENAREAWIDTH# - #WORKAREAWIDTH#)
	LocationX       = (#WORKAREAWIDTH# - #BarW#)
	LocationTaskbar = (#SCREENAREAY# + #SCREENAREAHEIGHT# - #TaskbarHeight#)

	CalenderH   = 98
	ClockH      = 106
	DiskH       = 45
	MusicH      = 250
	NetworkH    = 80
	PowerH      = 45
	SystemH     = 80
	WeatherH    = 119

	LocationCalendar =2
	LocationClock    =1
	LocationDisk1    =4
	LocationDisk2    =0
	LocationDisk3    =0
	LocationMusic    =-2
	LocationNetwork  =0
	LocationPower    =-1
	LocationSystem   =3
	LocationWeather  =5

	; LocationY0 is only used to null the placement
	LocationY0 =0
	LocationY1 =106
	LocationY2 =98
	LocationY3 =80
	LocationY4 =45
	LocationY5 =119
	LocationY6 =119
	LocationY7 =119
	LocationY8 =80
	LocationY9 =45
	LocationY-1=45
	LocationY-2=250

	LocationY1Total = 0
	LocationY2Total = (#LocationY1#)
	LocationY3Total = (#LocationY1# + #LocationY2#)
	LocationY4Total = (#LocationY1# + #LocationY2# + #LocationY3#)
	LocationY5Total = (#LocationY1# + #LocationY2# + #LocationY3# + #LocationY4#)
	LocationY6Total = (#LocationY1# + #LocationY2# + #LocationY3# + #LocationY4# + #LocationY5#)
	LocationY7Total = (#LocationY1# + #LocationY2# + #LocationY3# + #LocationY4# + #LocationY5# + #LocationY6#)
	LocationY8Total = (#LocationY1# + #LocationY2# + #LocationY3# + #LocationY4# + #LocationY5# + #LocationY6# + #LocationY7#)
	LocationY9Total = (#LocationY1# + #LocationY2# + #LocationY3# + #LocationY4# + #LocationY5# + #LocationY6# + #LocationY7# + #LocationY8#)
	LocationY-1Total = (#WORKAREAY# + #WORKAREAHEIGHT# - #LocationY-1#)
	LocationY-2Total = (#LocationY-1Total# - #LocationY-2#)

	LocationYCalender = [#LocationY[#LocationCalendar]Total]
	LocationYClock    = [#LocationY[#LocationClock]Total]
	LocationYDisk1    = [#LocationY[#LocationDisk1]Total]
	LocationYDisk2    = [#LocationY[#LocationDisk2]Total]
	LocationYDisk3    = [#LocationY[#LocationDisk3]Total]
	LocationYMusic    = [#LocationY[#LocationMusic]Total]
	LocationYNetwork  = [#LocationY[#LocationNetwork]Total]
	LocationYPower    = [#LocationY[#LocationPower]Total]
	LocationYSystem   = [#LocationY[#LocationSystem]Total]
	LocationYWeather  = [#LocationY[#LocationWeather]Total]


;===========================================================
;====  End  ================================================
;===========================================================
