#include <stdio.h>
#include "structs.h"

int main () {
  struct house h = sampleHouse () ;
  printHouse (h);
  return 0;
}
