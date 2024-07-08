#ifndef SPRITESHEET_H_
#define SPRITESHEET_H_

#include <raylib.h>

typedef struct {
	Rectangle source_position;
	Texture2D *source_texture;
} spritesheet_section_t;

typedef struct {
	Texture2D texture;

	// Player sprites
	spritesheet_section_t bird_1;
	spritesheet_section_t bird_2;
	spritesheet_section_t bird_3;

	// Scenery
	spritesheet_section_t background;
	spritesheet_section_t ground;
} spritesheet_t;


void load_spritesheet(spritesheet_t* sheet, const char* path);
spritesheet_section_t init_section(spritesheet_t *sheet, Rectangle source_position);
void draw_sprite_from_sheet(spritesheet_section_t* sprite, Vector2 dest);

// define all sprite sections
// wrap in a nice draw call

#endif // !SPRITESHEET_H_
#define SPRITESHEET_H_
