#include <Windows.h>
void LaunchThisGameWithoutEAC();
int APIENTRY WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow) 
{
	LaunchThisGameWithoutEAC();
	return 0;
}