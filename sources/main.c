#include "raylib.h"
#include "spritesheet.h"

#define SCREEN_WIDTH (400)
#define SCREEN_HEIGHT (544)

#define WINDOW_TITLE "Flappy Bird"

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
  SetTargetFPS(60);

	spritesheet_t sheet;
	load_spritesheet(&sheet, "spritesheet.png");

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(RAYWHITE);
		draw_sprite_from_sheet(&sheet.bird_1, (Vector2){ 0, 0 });

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
