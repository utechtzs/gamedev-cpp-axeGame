#include "raylib.h"

int main()
{
	int width = 800;
	int height = 600;
	InitWindow(width, height, "My Window");

	while (true)
	{
		BeginDrawing();
		ClearBackground(GREEN);
		EndDrawing();
	}
}