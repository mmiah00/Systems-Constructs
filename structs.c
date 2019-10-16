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
    h.address = ads [1];
    h.cost = prices [1];
    h.numrooms = rooms [1];
  }
  if (r == 2) {
    h.address = ads [2];
    h.cost = prices [2];
    h.numrooms = rooms [2];
  }
  if (r == 3) {
    h.address = ads [3];
    h.cost = prices [3];
    h.numrooms = rooms [3];
  }
  else {
    h.address = ads [4];
    h.cost = prices [4];
    h.numrooms = rooms [4];
  }
  return h;
}


void printHouse (struct house h) {
  printf ("HOUSE\n%s\n", h.address);
  printf ("Cost: %d", h.cost);
  printf ("Size: %d rooms", h.numrooms);
}

void modifyHouse (struct house *h, char *ad, int price, int rooms) {
  h -> address = ad;
  h -> cost = price;
  h -> numrooms = rooms;
}
