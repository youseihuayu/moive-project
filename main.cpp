/**
 * Driver for starting movie store tests
 */
#include "Classic.h"
#include "Comedy.h"
#include "Drama.h"
#include "Factory.h"
#include "Inventory.h"
#include "Movie.h"

#include <iostream>

using namespace std;

// forward declaration, implementation in store_test.cpp
void testAll();

int main() {
  Inventory inventory;
  inventory.processMovies("data4movies.txt");
  inventory.processCustomers("data4customers.txt");
  inventory.processCommand("data4commands.txt");
  inventory.processCommand("testcommands-1.txt");

  cout << "======= Above is additional test =========" << endl;

  testAll();
  cout << "Done." << endl;
  return 0;
}
