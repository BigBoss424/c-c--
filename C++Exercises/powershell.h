#programa once
#include "windows.h"

using namespace System;
using namespace System:management::Automation;

namespace ManagedCppPowershell
{
	[CmdletAttribute(VerbsCommon::Set, "ScreenResolution")]
	public ref class SetScreenResolutionCommand : public PSCmdlet
	{
		public:
			[ParameterAttribute(Mandatory=true)]
			property int Height;
			[ParameterAttribute(Mandatory=true)]
			property int width;
		protected:
			virtual void BeginProcessing() override;
	};
}
