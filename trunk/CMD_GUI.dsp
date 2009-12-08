# Microsoft Developer Studio Project File - Name="CMD_GUI" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86)  Application" 0x0101

CFG=CMD_GUI - Win32 Release
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "CMD_GUI.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "CMD_GUI.mak" CFG="CMD_GUI - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "CMD_GUI - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "CMD_GUI - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "CMD_GUI - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD CPP -MD /W3 /I "$(QTDIR)\include" /I "" /I "C:\Documents and Settings\Fu\My Documents\Visual Studio 2008\Projects\csci 335 programming midterm" /I "C:\Qt\3.2.1-vc\mkspecs\win32-msvc" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D UNICODE /D QT_DLL /D QT_THREAD_SUPPORT /D "QT_NO_DEBUG" /FD /c -nologo -Zm200 -GX -O1
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BSC32 /nologo
LINK32=link.exe
# ADD LINK32  "qt-mtnc321.lib"  "qtmain.lib"  "kernel32.lib"  "user32.lib"  "gdi32.lib"  "comdlg32.lib"  "advapi32.lib"  "shell32.lib"  "ole32.lib"  "oleaut32.lib"  "uuid.lib"  "imm32.lib"  "winmm.lib"  "wsock32.lib"  "winspool.lib"  "kernel32.lib"  "user32.lib"  "gdi32.lib"  "comdlg32.lib"  "advapi32.lib"  "shell32.lib"  "ole32.lib"  "oleaut32.lib"  "uuid.lib"  "imm32.lib"  "winmm.lib"  "wsock32.lib"  "winspool.lib"  "opengl32.lib"  "glu32.lib"  "delayimp.lib"   /NOLOGO /SUBSYSTEM:windows /LIBPATH:"$(QTDIR)\lib" delayimp.lib /DELAYLOAD:comdlg32.dll /DELAYLOAD:oleaut32.dll /DELAYLOAD:winmm.dll /DELAYLOAD:wsock32.dll /DELAYLOAD:winspool.dll


!ELSEIF  "$(CFG)" == "CMD_GUI - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD CPP -MDd /W3 /Gm /GZ /ZI /Od /I "$(QTDIR)\include" /I "" /I "C:\Documents and Settings\Fu\My Documents\Visual Studio 2008\Projects\csci 335 programming midterm" /I "C:\Qt\3.2.1-vc\mkspecs\win32-msvc" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D UNICODE /D QT_DLL /D QT_THREAD_SUPPORT /FD /c -nologo -Zm200 -GX -Zi
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BSC32 /nologo
LINK32=link.exe
# ADD LINK32  "qt-mtnc321.lib"  "qtmain.lib"  "kernel32.lib"  "user32.lib"  "gdi32.lib"  "comdlg32.lib"  "advapi32.lib"  "shell32.lib"  "ole32.lib"  "oleaut32.lib"  "uuid.lib"  "imm32.lib"  "winmm.lib"  "wsock32.lib"  "winspool.lib"  "kernel32.lib"  "user32.lib"  "gdi32.lib"  "comdlg32.lib"  "advapi32.lib"  "shell32.lib"  "ole32.lib"  "oleaut32.lib"  "uuid.lib"  "imm32.lib"  "winmm.lib"  "wsock32.lib"  "winspool.lib"  "opengl32.lib"  "glu32.lib"  "delayimp.lib"   /NOLOGO /SUBSYSTEM:windows /LIBPATH:"$(QTDIR)\lib" /pdbtype:sept /DEBUG


!ENDIF 

# Begin Target

# Name "CMD_GUI - Win32 Release"
# Name "CMD_GUI - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=main.cpp
# End Source File
# Begin Source File

SOURCE=CMD_GUI.ui.h
# End Source File

# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"

# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group

# Begin Group "Forms"
# Prop Default_Filter "ui"
# Begin Source File

SOURCE=CMD_GUI.ui
USERDEP_CMD_GUI.ui="$(QTDIR)\bin\moc.exe" "$(QTDIR)\bin\uic.exe"

!IF  "$(CFG)" == "CMD_GUI - Win32 Release"

# Begin Custom Build - Uic'ing CMD_GUI.ui...
InputPath=.\CMD_GUI.ui

BuildCmds= \
	$(QTDIR)\bin\uic CMD_GUI.ui -o CMD_GUI.h \
	$(QTDIR)\bin\uic CMD_GUI.ui -i CMD_GUI.h -o CMD_GUI.cpp \
	$(QTDIR)\bin\moc CMD_GUI.h -o moc_CMD_GUI.cpp \

"CMD_GUI.h" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"CMD_GUI.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"moc_CMD_GUI.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

# End Custom Build

!ELSEIF  "$(CFG)" == "CMD_GUI - Win32 Debug"

# Begin Custom Build - Uic'ing CMD_GUI.ui...
InputPath=.\CMD_GUI.ui

BuildCmds= \
	$(QTDIR)\bin\uic CMD_GUI.ui -o CMD_GUI.h \
	$(QTDIR)\bin\uic CMD_GUI.ui -i CMD_GUI.h -o CMD_GUI.cpp \
	$(QTDIR)\bin\moc CMD_GUI.h -o moc_CMD_GUI.cpp \

"CMD_GUI.h" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"CMD_GUI.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"moc_CMD_GUI.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=settings.ui
USERDEP_settings.ui="$(QTDIR)\bin\moc.exe" "$(QTDIR)\bin\uic.exe"

!IF  "$(CFG)" == "CMD_GUI - Win32 Release"

# Begin Custom Build - Uic'ing settings.ui...
InputPath=.\settings.ui

BuildCmds= \
	$(QTDIR)\bin\uic settings.ui -o settings.h \
	$(QTDIR)\bin\uic settings.ui -i settings.h -o settings.cpp \
	$(QTDIR)\bin\moc settings.h -o moc_settings.cpp \

"settings.h" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"settings.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"moc_settings.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

# End Custom Build

!ELSEIF  "$(CFG)" == "CMD_GUI - Win32 Debug"

# Begin Custom Build - Uic'ing settings.ui...
InputPath=.\settings.ui

BuildCmds= \
	$(QTDIR)\bin\uic settings.ui -o settings.h \
	$(QTDIR)\bin\uic settings.ui -i settings.h -o settings.cpp \
	$(QTDIR)\bin\moc settings.h -o moc_settings.cpp \

"settings.h" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"settings.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"moc_settings.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=about.ui
USERDEP_about.ui="$(QTDIR)\bin\moc.exe" "$(QTDIR)\bin\uic.exe"

!IF  "$(CFG)" == "CMD_GUI - Win32 Release"

# Begin Custom Build - Uic'ing about.ui...
InputPath=.\about.ui

BuildCmds= \
	$(QTDIR)\bin\uic about.ui -o about.h \
	$(QTDIR)\bin\uic about.ui -i about.h -o about.cpp \
	$(QTDIR)\bin\moc about.h -o moc_about.cpp \

"about.h" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"about.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"moc_about.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

# End Custom Build

!ELSEIF  "$(CFG)" == "CMD_GUI - Win32 Debug"

# Begin Custom Build - Uic'ing about.ui...
InputPath=.\about.ui

BuildCmds= \
	$(QTDIR)\bin\uic about.ui -o about.h \
	$(QTDIR)\bin\uic about.ui -i about.h -o about.cpp \
	$(QTDIR)\bin\moc about.h -o moc_about.cpp \

"about.h" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"about.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

"moc_about.cpp" : "$(SOURCE)" "$(INTDIR)" "$(OUTDIR)"
	$(BuildCmds)

# End Custom Build

!ENDIF 

# End Source File

# End Group






# Begin Group "Generated"
# Begin Source File

SOURCE=moc_CMD_GUI.cpp
# End Source File
# Begin Source File

SOURCE=moc_settings.cpp
# End Source File
# Begin Source File

SOURCE=moc_about.cpp
# End Source File

# Begin Source File

SOURCE=CMD_GUI.cpp
# End Source File
# Begin Source File

SOURCE=settings.cpp
# End Source File
# Begin Source File

SOURCE=about.cpp
# End Source File

# Begin Source File

SOURCE=CMD_GUI.h
# End Source File
# Begin Source File

SOURCE=settings.h
# End Source File
# Begin Source File

SOURCE=about.h
# End Source File




# Prop Default_Filter "moc"
# End Group
# End Target
# End Project

