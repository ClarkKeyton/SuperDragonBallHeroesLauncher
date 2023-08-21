#include <BlackBone/Process/Process.h>
#include <BlackBone/Patterns/PatternSearch.h>

void LaunchThisGameWithoutEAC() {
	blackbone::Process jk;
	NTSTATUS st = jk.CreateAndAttach(L"SDBHeroes_WorldMission.exe", false, true);
	if (st) {
		MessageBoxA(0, "Unable To Find This Game", "Super Dragon Ball Heroes", 0);
	}
	else
	{
		Sleep(1200);
		exit(1002);
	}
}