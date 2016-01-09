// Definicje struktur

//Punkt:
struct point {
  int x;
  int y;
};
//Prostokąt:
struct rect {
  struct point ll;  /* lower left */
  struct point ur;  /* upper right */
};
//Funkcja, makepoint, z podanych współrzędnych tworzy strukturę point:
struct point makepoint(int x, int y);

/* ptinrect: zwróć 1 jeśli p należy do r, 0 jeśli nie należy */
int ptinrect(struct point p, struct rect r);

/* rectinrect: zwróć 1 jeśli r1 jest zawarty w r2, 0
— w przeciwnym przypadku */
int rectinrect(struct rect r1, struct rect r);
