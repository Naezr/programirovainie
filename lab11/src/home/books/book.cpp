#include <iostream>
#include <stdexcept>

#include "book.hpp"

#include "../notPositiveException.hpp"

Book::Book() {
  setTitle("");
  setAuthor("");
  setPages(0);
  setPrice(0);
  setAvailable(true);
}

Book::Book(
  const std::string title, const std::string author, const int pages,
  const double price, const bool isAvailable
) {
  setTitle(title);
  setAuthor(author);
  setPages(pages);
  setPrice(price);
  setAvailable(isAvailable);
};

Book::Book(
  const std::string title, const std::string author, const int pages
) {
  setTitle(title);
  setAuthor(author);
  setPages(pages);
  Book::setDefaultPrice(); // default
  setAvailable(true);      // default: available
}

Book::~Book() {}

void Book::initPages(const int value) {

  if (value < 0)
    throw new notPositiveException("Pages count must be positive!");

  this->pages = value;
}

void Book::initPrice(const double value) {

  if (value < 0)
    throw new notPositiveException("Price must be positive!");

  this->price = value;
}

void Book::setDefaultPrice() {
  double result = pages * 10;

  this->price = result;
}

void Book::setTitle(const std::string value) { this->title = value; }
const std::string Book::getTitle() const { return title; }

void Book::setAuthor(const std::string value) {

  this->author = value;
}
const std::string Book::getAuthor() const { return author; }

void      Book::setPages(const int value) { initPages(value); }
const int Book::getPages() const { return pages; }

void         Book::setPrice(const double value) { initPrice(value); }
const double Book::getPrice() const { return price; }

void Book::setAvailable(const bool value) {

  this->isAvailable = value;
}
const bool Book::getAvailable() const { return isAvailable; }

void Book::take() {

  if (!getAvailable())
    throw new std::runtime_error("Book is already taken!");

  setAvailable(false);
  std::cout << "Book taken successfully!\n";
}

void Book::giveBack() {
  if (getAvailable())
    throw new std::runtime_error("Book is not taken!");

  setAvailable(true);
  std::cout << "Book given back successfully!\n";
}