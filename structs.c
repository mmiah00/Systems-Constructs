#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

struct house sampleHouse ( ) {
  struct house h;
  char[5][50] ads = {"35 Elm Street", "123 Arthur Avenue", "80 East 92nd Street", "20 Union Square", "90 Broad Street"};
  int[5] prices = {200000, 45000, 250000, 275000, 90000};
  int[5] rooms = {4, 2, 5, 3, 2};
  int r = rand () % 5;
  if (r == 0) {
    h.address = ads [0];
    h.cost = prices [0];
    h.numrooms = rooms [0];
  }
  if (r == 1) {
    h.address = ads [0];
    h.cost = prices [0];
    h.numrooms = rooms [0];
  }
  return h;
}
struct boardGame sampleGame ();

void printHouse (struct house h);
void printGame(struct boardGame g);

void modifyHouse (struct house h, char* ad, int price, int rooms);
void modifyGame (struct boardGame g, char* title, int players, int pts);
