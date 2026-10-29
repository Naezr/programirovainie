#pragma once

#include "book.hpp"

#include <vector>

class Bookshelf {
  std::vector<Book> books_;

public:
  void push_back(const Book &book) { books_.push_back(book); }
};