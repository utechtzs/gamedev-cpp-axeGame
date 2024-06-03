#include "raylib.h"

int main()
{
	// window dimensions
	int width = 350;
	int height = 200;
	InitWindow(width, height, "My Window");

	// circle dimensions
	int circle_x = width / 2;
	int circle_y = height / 2;

	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(WHITE);

		DrawCircle(circle_x, circle_y, 25, BLUE);

		if (IsKeyDown(KEY_D))
		{
			circle_x += 10;
		}
		else if (IsKeyDown(KEY_A))
		{
			circle_x -= 10;
		}
		else if (IsKeyDown(KEY_W))
		{
			circle_y -= 10;
		}
		else if (IsKeyDown(KEY_S))
		{
			circle_y += 10;
		}
		else if (IsKeyDown(KEY_SPACE))
		{
			circle_x = width / 2;
			circle_y = height / 2;
		}

		EndDrawing();
	}
}