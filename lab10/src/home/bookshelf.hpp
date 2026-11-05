#pragma once

#include "book.hpp"

#include <vector>

class Bookshelf {
  std::vector<Book *> books_;

public:
  void push_back(Book *book);
  ~Bookshelf();

  double getPrice() const;
  int    countAvailable() const;
};