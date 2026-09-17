#include <iostream>

#include "book.hpp"

void Book::setTitle(const std::string value) {
  this->title = value;
  std::cout << "setTitle(" << value << ")\n";
}
const std::string Book::getTitle() const {
  std::cout << "getTitle() = " << title << "\n";
  return title;
}

void Book::setAuthor(const std::string value) {
  this->author = value;
  std::cout << "setAuthor(" << value << ")\n";
}
const std::string Book::getAuthor() const {
  std::cout << "getAuthor() = " << author << "\n";
  return author;
}

void Book::setPages(const int value) {
  this->pages = value;
  std::cout << "setPages(" << value << ")\n";
}
const int Book::getPages() const {
  std::cout << "getPages() = " << pages << "\n";
  return pages;
}

void Book::setPrice(const double value) {
  this->price = value;
  std::cout << "setPrice(" << value << ")\n";
}
const double Book::getPrice() const {
  std::cout << "getPrice() = " << price << "\n";
  return price;
}

void Book::setAvailable(const bool value) {
  this->isAvailable = value;
  std::cout << "setAvailable(" << value << ")\n";
}
const bool Book::getAvailable() const {
  std::cout << "getAvailable() = " << isAvailable << "\n";
  return isAvailable;
}

void Book::take() {
  if (!getAvailable()) {
    std::cout << "Book is already taken!\n";
    return;
  }
  setAvailable(false);
  std::cout << "Book taken successfully!\n";
}

void Book::giveBack() {
  if (getAvailable()) {
    std::cout << "Book is not taken!\n";
    return;
  }
  setAvailable(true);
  std::cout << "Book given back successfully!\n";
}