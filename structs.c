#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

char ads[5][50] = {"35 Elm Street", "123 Arthur Avenue", "80 East 92nd Street", "20 Union Square", "90 Broad Street"};

struct house sampleHouse ( ) {
  struct house h;
  int r = rand () % 5;
  strcpy (h.address, ads [r]);
  h.cost = rand () * .001;
  h.numrooms = rand () % 5;
  return h;
}


void printHouse (struct house h) {
  printf ("%s\n", h.address);
  printf ("Cost: %d\n", h.cost);
  printf ("Size: %d rooms\n", h.numrooms);
}

void modifyHouse (struct house *h, char *ad, int price, int rooms) {
  strcpy (h -> address, ad);
  h -> cost = price;
  h -> numrooms = rooms;
}
