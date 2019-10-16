#include <stdio.h>
#include "structs.h"

int main () {
  struct house h = sampleHouse () ;
  struct boardgame g = sampleBoardgame ();
  houseString (h);
  gameString (g);
  return 0;
}
