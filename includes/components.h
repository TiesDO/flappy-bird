#ifndef COMPONENTS_H_
#define COMPONENTS_H_

#include <raylib.h>

// TRANSFORM

typedef struct {
	Vector2 position;
	float rotation;
} transform_c;

transform_c new_transform(Vector2 pos);

// COLLISIONS

enum CollisionShape {
	Rect, Circle	
};

typedef struct {
	Vector2 position;
	float radius;
} CircleCollider;

typedef struct {
	Vector2 position;
	float width;
	float height;
} RectCollider;

typedef struct {
	enum CollisionShape shape_type;
	union { 
		RectCollider rectangle;
		CircleCollider circle;
	};
} collision_c;

collision_c new_circle_collider(Vector2 pos, float radius);
collision_c new_rectangle_collider(Vector2 pos, float width, float height);

// TODO: make some collision detection

// CONTROLLER

typedef struct {
	float gravity;
	float power;
} bird_controller_c;

bird_controller_c new_bird_controller(float gravity, float power);

#endif // !COMPONENTS_H_
