# Flappy Bird

Recreate flappy bird using `raylib` in C, cuz your girlfriend is out of town and you have nothing better to do.

## Steps

- [x] splice the sheet on game load
- [x] render bird
- [x] render background
- [ ] tap to jump with gravity
- [ ] MVP 1
- [ ] add ground
- [ ] add pipes and move pipes
- [ ] collision is restart
- [ ] MVP 2
- [ ] track score
- [ ] display score
- [ ] death shows menu
- [ ] MVP 3
- [ ] title screen
- [ ] pause menu with quit
- [ ] MVP 4
- [ ] add bird animation
- [ ] score animation
- [ ] MVP 5
- [ ] final touches

## Main ECS

try this whole thing using ecs architecture:

- entities
    - pipe
    - ground
    - player
- components
    - transform
    - collision box/sphere
    - sprite renderer
    - player controller
    - pipe controller
- systems
    - renderer
    - collision detector
    - movement


There will be more entities/systems/components for the UI stuff, but I need to pick up my little sister now.
