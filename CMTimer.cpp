// CMTimer.cpp

#include "stdafx.h"
#include "Form1.h"
#include "EditOptions.h"
#include <windows.h>

using namespace CMTimer;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Form1());
	return 0;
}
