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
struct boardGame sampleGame () {
  struct boardGame g;
  char [5][50] titles = {"Scrabble", "Chess", "Checkers", "Battleship", "Connect 4"}
  int [5] players = {6, 2, 2, 4, 4};
  int r = rand () % 5;
  if (r == 0) {
    g.name = titles [0];
    g.numplayers = players[0];
  }
  if (r == 1) {
    g.name = titles [1];
    g.numplayers = players[1];
  }
  if (r == 2) {
    g.name = titles [2];
    g.numplayers = players[2];
  }
  if (r == 3) {
    g.name = titles [3];
    g.numplayers = players[3];
  }
  else {
    g.name = titles [4];
    g.numplayers = players[4]; 
  }
  g.points = 0;
  return g;
}

void printHouse (struct house h);
void printGame(struct boardGame g);

void modifyHouse (struct house h, char* ad, int price, int rooms);
void modifyGame (struct boardGame g, char* title, int players, int pts);
