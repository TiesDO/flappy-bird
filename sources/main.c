#include "raylib.h"
#include "spritesheet.h"

#define SCREEN_WIDTH (432)
#define SCREEN_HEIGHT (768)

#define WINDOW_TITLE "Flappy Bird"

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
  SetTargetFPS(60);

  spritesheet_t sheet;
  load_spritesheet(&sheet, "spritesheet.png");

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(RAYWHITE);
    draw_sprite_from_sheet(&sheet.background, (Vector2){0, 0});
    draw_sprite_from_sheet(&sheet.bird_1, (Vector2){0, 0});

    draw_sprite_from_sheet(
        &sheet.ground,
        (Vector2){0, (float)SCREEN_HEIGHT / 3 - sheet.ground.source_position.height});

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
