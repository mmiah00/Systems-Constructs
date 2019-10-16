struct house {
  char[] address;
  int cost;
  int numrooms;
};

struct boardGame {
  char[] name;
  int numplayers;
  int points;
};

struct house sampleHouse ( );
struct boardGame sampleGame ();

void printHouse (struct house h);
void printGame(struct boardGame g);

void modifyHouse (struct house h, char* ad, int price, int rooms);
void modifyGame (struct boardGame g, char* title, int players, int pts);
