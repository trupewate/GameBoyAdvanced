#ifndef MAIN_H
#define MAIN_H


#include "gba.h"
#include "control.h"

// TODO: Create any necessary structs

enum gba_state {
    START,
    PLAY,
    WIN,
    LOSE,
  };
struct alien {
    int row;
    int col;
    int h;
    int v;
    int size;
    u16 color;
};

struct player {
    int row;
    int col;
    int height;
    int width;
    int lives;

};
struct state {
    enum gba_state gamestate;
    int naliens;
    struct alien aliens[MAX_ALIENS];
    struct player player;
    int score;
};
void playerFun(struct player *p, u32 currentButtons);


#endif
