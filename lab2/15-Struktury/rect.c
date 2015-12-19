#include "rect.h"

//Funkcja, makepoint, z podanych współrzędnych tworzy strukturę point:
struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

int ptinrect(struct point p, struct rect r) {
  return p.x >= r.ll.x && p.x < r.ur.x
  && p.y >= r.ll.y && p.y < r.ur.y;
}

int rectinrect(struct rect r1, struct rect r) {
  return ptinrect(r1.ll, r) && ptinrect(r1.ur, r);
}
