Invoke-CppCompiler -Code "
#pragma once
#include "windows.h"

using namespace System;
using namespace System::Management::Automation;

namespace MAnagedCppPowershell
{
	[CmdletAttribute(VerbsCommon::Set, "ScreenResolution")]
	public ref class SetScreenResolutionCommand : public PSCmdlet
	{
		public: 
			[ParameterAttribute(Mandatory=true)]
			property int weight;
			[ParameterAttribute(Mandatory=true)]
			property int width;
		protected:
			virtual void BeginProcessing() override;
			{
				DEVMODE devmode;
				SecureZeroMemory(&amp;devmode, sizeof(DEVMODE));
				devmode.dmSize = sizeof(DEVMODE);
					if(0 != EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &amp;devmode))
					{
						devmode.dmPelsHeight = Height;
						devmode.dmPelsWidth = Width;

						int iRet = ChangeDisplaySettings(&amp,devmode, CDS_TEST);
						
						if(iRet == DISP_CHANGE_FAILED)
						{
							throw gcnew Exception("Failed to change screen resolution.");
						}
						else 
						{
							iRet = ChangeDisplaySettings(&amp;devmode,CDS_UPDATEREGISTRY);
							switch(iRet)
							{
								case DISP_CHANGE_SUCCESSFUL:
									WriteVerbose("CHange was successful!");
									break;
								case DISP_CHANGE_RESTART:
									WriteWarning("Change requires restart!");
									break;
								default:
									throw gcnew Exception("Failed to change screen resolution.");
									break;
							}
						}
					}
					else
					{
						WriteWarning(String::Format("Failed to set resolution, Last Error=(0)", GetLastError()));
					}
				}
		};
}

"	AdditionalLibs "user32.lib"	-AssemblyReferences	"C:\Program	Files(x86)\Reference
	Asssemblies\Microsoft\WindowsPowerShell\v1.0\System.Management.Automation.dll"
