struct house {
  char address[50];
  int cost;
  int numrooms;
};

struct house sampleHouse ( );

void printHouse (struct house h);

void modifyHouse (struct house *h, char *ad, int price, int rooms);
