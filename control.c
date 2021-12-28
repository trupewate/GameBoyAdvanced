#include "control.h"

void playerFun(struct player *p, u32 currentButtons) {
    if (KEY_DOWN(BUTTON_UP, currentButtons)) {
          p->row -= 5;
          if (p->row < 0) {
            p->row = 0; 
          }
        }
        if (KEY_DOWN(BUTTON_DOWN, currentButtons)) {
          p->row += 5;
          if (p->row > HEIGHT-p->height) {
            p->row = HEIGHT - p->height; 
          }
        }
        if (KEY_DOWN(BUTTON_LEFT, currentButtons)) {
          p->col -= 5;
          if (p->col < 0) {
            p->col = 0; 
          }
        }
        if (KEY_DOWN(BUTTON_RIGHT, currentButtons)) {
          p->col += 5;
          if (p->col > WIDTH - p->width) {
            p->col = WIDTH - p->width; 
          }
        }
}