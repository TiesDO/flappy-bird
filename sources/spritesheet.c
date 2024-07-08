#include "spritesheet.h"
#include "raylib.h"

void load_spritesheet(spritesheet_t *sheet, const char *path) {
  sheet->texture = LoadTexture(ASSETS_PATH "spritesheet.png");

  sheet->bird_1 = init_section(sheet, (Rectangle){263, 62, 19, 16});
  sheet->bird_2 = init_section(sheet, (Rectangle){264, 88, 19, 16});
  sheet->bird_3 = init_section(sheet, (Rectangle){222, 121, 19, 16});
}

spritesheet_section_t init_section(spritesheet_t *sheet,
                                   Rectangle source_position) {
  return (spritesheet_section_t){.source_position = source_position,
                                 .source_texture = &sheet->texture};
}

void draw_sprite_from_sheet(spritesheet_section_t *sprite, Vector2 dest) {
  DrawTexturePro(*(sprite->source_texture), sprite->source_position,
                 (Rectangle){.x = dest.x,
                             .y = dest.y,
                             .width = sprite->source_position.width,
                             .height = sprite->source_position.height},
                 (Vector2){0, 0}, 0, WHITE);
}
