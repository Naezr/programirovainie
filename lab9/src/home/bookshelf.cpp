#include "bookshelf.hpp"

#include "log.hpp"

void Bookshelf::push_back(Book *book) {
  LOG();
  books_.push_back(book);
}

Bookshelf::~Bookshelf() {
  LOG();
  for (Book *book : books_) delete book;
}

double Bookshelf::getPrice() const {
  double sum = 0;
  for (Book *b : books_) sum += b->getPrice();
  LOG(sum);
  return sum;
}

int Bookshelf::countAvailable() const {
  int count = 0;
  for (Book *b : books_) count += b->getAvailable();
  LOG(count);
  return count;
}