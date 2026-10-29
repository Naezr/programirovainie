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

#include "log.hpp"

Book::Book() {
  LOG();
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
  LOG(title, author, pages, price, isAvailable);
  setTitle(title);
  setAuthor(author);
  setPages(pages);
  setPrice(price);
  setAvailable(isAvailable);
};

Book::Book(
  const std::string title, const std::string author, const int pages
) {
  LOG(title, author, pages);
  setTitle(title);
  setAuthor(author);
  setPages(pages);
  Book::setDefaultPrice(); // default
  setAvailable(true);      // default: available
}

Book::~Book() {
  LOG();
  delete title;
  delete author;
  delete pages;
  delete price;
  delete isAvailable;
}

void Book::initPages(const int value) {
  LOG(value);
  if (value < 0) {
    std::cout << "Invalid pages count: " << value
              << "\nPages count must be positive!\n";
    exit(1);
  }
  *this->pages = value;
}

void Book::initPrice(const double value) {
  LOG(value);
  if (value < 0) {
    std::cout << "Invalid price: " << value
              << "\nPrice must be positive!\n";
    exit(1);
  }
  *this->price = value;
}

void Book::setDefaultPrice() {
  double result = *pages * 10;
  LOG(result);
  *this->price = result;
}

void Book::setTitle(const std::string value) {
  LOG(value);
  *this->title = value;
}
const std::string Book::getTitle() const {
  LOG(*title);
  return *title;
}

void Book::setAuthor(const std::string value) {
  LOG(value);
  *this->author = value;
}
const std::string Book::getAuthor() const {
  LOG(*author);
  return *author;
}

void Book::setPages(const int value) {
  LOG(value);
  initPages(value);
}
const int Book::getPages() const {
  LOG(*pages);
  return *pages;
}

void Book::setPrice(const double value) {
  LOG(value);
  initPrice(value);
}
const double Book::getPrice() const {
  LOG(*price);
  return *price;
}

void Book::setAvailable(const bool value) {
  LOG(value);
  *this->isAvailable = value;
}
const bool Book::getAvailable() const {
  LOG(*isAvailable);
  return *isAvailable;
}

void Book::take() {
  LOG();
  if (!getAvailable()) {
    std::cout << "Book is already taken!\n";
    return;
  }
  setAvailable(false);
  std::cout << "Book taken successfully!\n";
}

void Book::giveBack() {
  LOG();
  if (getAvailable()) {
    std::cout << "Book is not taken!\n";
    return;
  }
  setAvailable(true);
  std::cout << "Book given back successfully!\n";
}