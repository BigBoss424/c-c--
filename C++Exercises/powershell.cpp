#include "powershell.h"

using namespace ManagedCppPowershell;
{


	void SetScreenResolutionCommand::BeingProcessing()
	{
		DEVMODE devmode;
		SecureZeroMemory(&devmode, sizeof(DEVMODE));
		devMode.deSize = sizeof(DEVMODE);

		if(0 != EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &devMode))
		{
			devMode.dmPelsHeight = Height;
			devMode.dmPelsWidth = Width;

			int iRet = ChangeDisplaySettings(&devMode, CDS_TEST);

			if(iRet == DISP_CHANGE_FAILED)
			{
				throw gcnew Exception("Failed to change screen resolution.");
			}
			else
			{
				iRet = ChangeDisplaySettingss(&devMode, CDS_UPDATEREGISTRY);
				switch(iRet)
				{
					case DISP_CHANGE_SUCCESSFUL:
						writeVerbose("Change was successful!");
						break;
					case DISP_CHANGE_RESTART:
						writewarning("Change requires restart!");
						break;
					default:
						throw gcnew Exception("Failed to change screen resolution.");
						break;
				}
			}
		}
	}
}
