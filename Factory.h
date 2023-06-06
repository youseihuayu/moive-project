#ifndef FACTORY_H
#define FACTORY_H

#include "Classic.h"
#include "Comedy.h"
#include "Drama.h"
#include "Movie.h"

#include <cassert>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class Factory {
public:
  // constructor
  Factory();

  // destructor
  ~Factory() {
    for (const auto &m : movies) {
      delete m;
    }
  }
  // creates movies by type
  Movie *createMovie(char movieType);

private:
  static const int SIZE = 'Z' - 'A' + 1;
  Movie *movies[SIZE];
  int getBucket(char movieType) const;
};

#endif