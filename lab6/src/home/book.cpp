/*
 * Преамбула
 *
 * Выполнил: Боков Назар Алексеевич
 * Группа: ПМИ-251
 *
 * Данная программа является реализацией
 * методов описанных в заголовочном файле
 * класса "Книга" - book.hpp
 *
 */

#include <iostream>

#include "book.hpp"

Book::Book() {
  std::cout << "Book()\n";
  setTitle("");
  setAuthor("");
  setPages(0);
  setPrice(0);
  setAvailable(true);
}

Book::Book(const std::string title, const std::string author, const int pages,
           const double price, const bool isAvailable) {
  std::cout << "Book(" << title << ", " << author << ", " << pages << ", "
            << price << ", " << isAvailable << ")\n";
  setTitle(title);
  setAuthor(author);
  setPages(pages);
  setPrice(price);
  setAvailable(isAvailable);
};

Book::Book(const std::string title, const std::string author, const int pages) {
  std::cout << "Book(" << title << ", " << author << ", " << pages << ")\n";
  setTitle(title);
  setAuthor(author);
  setPages(pages);
  setDefaultPrice();  // default
  setAvailable(true); // default: available
}

Book::~Book() {
  std::cout << "~Book()\n";
  delete title;
  delete author;
  delete pages;
  delete price;
  delete isAvailable;
}

void Book::initPages(const int value) {
  std::cout << "initPages(" << value << ")\n";
  if (value < 0) {
    std::cout << "Invalid pages count: " << value
              << "\nPages count must be positive!\n";
    exit(1);
  }
  *this->pages = value;
}

void Book::initPrice(const double value) {
  std::cout << "initPrice(" << value << ")\n";
  if (value < 0) {
    std::cout << "Invalid price: " << value << "\nPrice must be positive!\n";
    exit(1);
  }
  *this->price = value;
}

void Book::setDefaultPrice() {
  std::cout << "Book::setDefaultPrice()\n";
  *this->price = *pages * 10;
}

void Book::setTitle(const std::string value) {
  *this->title = value;
  std::cout << "setTitle(" << value << ")\n";
}
const std::string Book::getTitle() const {
  std::cout << "getTitle() = " << *title << "\n";
  return *title;
}

void Book::setAuthor(const std::string value) {
  *this->author = value;
  std::cout << "setAuthor(" << value << ")\n";
}
const std::string Book::getAuthor() const {
  std::cout << "getAuthor() = " << *author << "\n";
  return *author;
}

void Book::setPages(const int value) {
  std::cout << "setPages(" << value << ")\n";
  initPages(value);
}
const int Book::getPages() const {
  std::cout << "getPages() = " << *pages << "\n";
  return *pages;
}

void Book::setPrice(const double value) {
  std::cout << "setPrice(" << value << ")\n";
  initPrice(value);
}
const double Book::getPrice() const {
  std::cout << "getPrice() = " << *price << "\n";
  return *price;
}

void Book::setAvailable(const bool value) {
  *this->isAvailable = value;
  std::cout << "setAvailable(" << value << ")\n";
}
const bool Book::getAvailable() const {
  std::cout << "getAvailable() = " << *isAvailable << "\n";
  return *isAvailable;
}

void Book::take() {
  std::cout << "take()\n";
  if (!getAvailable()) {
    std::cout << "Book is already taken!\n";
    return;
  }
  setAvailable(false);
  std::cout << "Book taken successfully!\n";
}

void Book::giveBack() {
  std::cout << "giveBack()\n";
  if (getAvailable()) {
    std::cout << "Book is not taken!\n";
    return;
  }
  setAvailable(true);
  std::cout << "Book given back successfully!\n";
}