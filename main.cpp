#include "raylib.h"

int main()
{
	int XY_INCREMENT = 5;
	// window dimensions
	int width = 350;
	int height = 200;
	InitWindow(width, height, "My Window");

	// circle dimensions
	int circle_x = width / 2;
	int circle_y = height / 2;
	int radius = 25;

	SetTargetFPS(159);
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(WHITE);

		DrawCircle(circle_x, circle_y, radius, BLUE);

		if ((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) && circle_x > 0 + radius)
		{
			circle_x -= XY_INCREMENT;
		}
		else if ((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && circle_x < width - radius)
		{
			circle_x += XY_INCREMENT;
		}
		else if ((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) && circle_y > 0 + radius)
		{
			circle_y -= XY_INCREMENT;
		}
		else if ((IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) && circle_y < height - radius)
		{
			circle_y += XY_INCREMENT;
		}
		else if (IsKeyDown(KEY_SPACE))
		{
			circle_x = width / 2;
			circle_y = height / 2;
		}

		EndDrawing();
	}
}