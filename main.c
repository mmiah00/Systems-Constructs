#include <stdio.h>
#include "structs.h"

int main () {
  printf ("First House: \n");
  struct house h = sampleHouse () ;
  printHouse (h);

  modifyHouse (&h, "346 Chambers Street", 200000,2);
  printf ("After modification:\n" );
  printHouse (h);
  return 0;
}
