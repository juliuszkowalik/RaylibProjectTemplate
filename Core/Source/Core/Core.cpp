#include "Core.h"

namespace Core {

	void Run()
	{
		InitWindow(GetScreenWidth(), GetScreenHeight(), "Template Window");
		SetTargetFPS(GetMonitorRefreshRate(GetCurrentMonitor()));

		while(!WindowShouldClose())
		{
			BeginDrawing();
			ClearBackground(BLACK);
			EndDrawing();
		}

		CloseWindow();
	}

}
