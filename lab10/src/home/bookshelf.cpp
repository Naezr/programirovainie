#include "bookshelf.hpp"

void Bookshelf::push_back(Book *book) { books_.push_back(book); }

Bookshelf::~Bookshelf() {
  for (Book *book : books_) delete book;
}

double Bookshelf::getPrice() const {
  double sum = 0;
  for (Book *b : books_) sum += b->getPrice();
  return sum;
}

int Bookshelf::countAvailable() const {
  int count = 0;
  for (Book *b : books_) count += b->getAvailable();

  return count;
}