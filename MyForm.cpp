#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include <Windows.h>
using namespace Project3; // Project name
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}