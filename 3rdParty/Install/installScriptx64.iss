; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#include "Common.iss"

[Setup]

AppVersion=1.3.2
VersionInfoVersion=1.3.2.0

AppVerName=GLInterceptx64 1.3.2
DefaultDirName={pf}\GLInterceptx64_1_3_2
OutputBaseFilename=GLInterceptx64_1_3_2

AppName=GLInterceptx64
DefaultGroupName=GLInterceptx64
ArchitecturesAllowed=x64
ArchitecturesInstallIn64BitMode=x64

[Files]
Source: "..\..\Bin\MainLibx64\OpenGL32.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "..\..\Bin\Plugins\*.*"; DestDir: "{app}\Plugins"; Excludes: "GL*.dll,TestPlugin.dll"; Flags: ignoreversion recursesubdirs
Source: "..\..\Bin\Pluginsx64\*.*"; DestDir: "{app}\Plugins"; Flags: ignoreversion recursesubdirs

