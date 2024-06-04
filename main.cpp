#include "raylib.h"

int main() {
	int XY_INCREMENT = 5;
	// window dimensions
	int width = 800;
	int height = 450;
	InitWindow(width, height, "My Window");

	// circle dimensions
	int circle_x = width / 4;
	int circle_y = height / 2;
	int radius = 25;

	// axe coords
	int axe_x = width / 2;
	int axe_y = 0;
	int axe_length = 50;
	int direction = 5;

	bool collision = false;

	SetTargetFPS(159);
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(WHITE);

		if (collision) {
			DrawText("Game Over!", width / 2, height / 2, 20, RED);
		} else {
			int l_circle_x = circle_x - radius;
			int r_circle_x = circle_x + radius;
			int u_circle_y = circle_y - radius;
			int b_circle_y = circle_y + radius;

			int l_axe_x = axe_x;
			int r_axe_x = axe_x + axe_length;
			int u_axe_y = axe_y;
			int b_axe_y = axe_y + axe_length;

			DrawCircle(circle_x, circle_y, radius, BLUE);
			DrawRectangle(axe_x, axe_y, axe_length, axe_length, RED);

			// move axe
			axe_y += direction;

			if (axe_y + axe_length > height || (direction < 0 && axe_y < 0)) {
				direction = -direction;
			}

			if ((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) && circle_x > 0 + radius) {
				circle_x -= XY_INCREMENT;
			} else if ((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && circle_x < width - radius) {
				circle_x += XY_INCREMENT;
			} else if ((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) && circle_y > 0 + radius) {
				circle_y -= XY_INCREMENT;
			} else if ((IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) && circle_y < height - radius) {
				circle_y += XY_INCREMENT;
			} else if (IsKeyDown(KEY_SPACE)) {
				circle_x = width / 4;
				circle_y = height / 2;
			}
		}
		EndDrawing();
	}
}