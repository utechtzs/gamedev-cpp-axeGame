#include "raylib.h"

int main()
{
	int x = 350;
	int y = 200;
	InitWindow(x, y, "My Window");

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(WHITE);
		DrawCircle(x / 2, y / 2, 25, BLUE);
		EndDrawing();
	}
}