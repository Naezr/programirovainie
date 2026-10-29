/*
 * Преамбула
 *
 * Выполнил: Боков Назар Алексеевич
 * Группа: ПМИ-251
 *
 * Данная программа является реализацией
 * методов описанных в заголовочном файле
 * класса "Комикс" - comics.hpp
 *
 */

#include <iostream>

#include "comics.hpp"

#include "log.hpp"

Comics::Comics() : Book() {
  std::cout << "Comics()\n";
  setGenre("");
  setChapters(0);
}

Comics::Comics(
  const std::string title, const std::string author, const int pages,
  const double price, const bool isAvailable, const std::string genre,
  const int chapters
)
    : Book(title, author, pages, price, isAvailable) {
  LOG(title, author, pages, price, isAvailable, genre, chapters);
  setGenre(genre);
  setChapters(chapters);
}

Comics::~Comics() {
  LOG();
  delete genre;
  delete chapters;
}

void Comics::initChapters(const int value) {
  LOG(value);
  if (value < 0) {
    std::cout << "Invalid chapters count: " << value
              << "\nChapters count must be positive!\n";
    exit(1);
  }
  *this->chapters = value;
}

void Comics::setDefaultPrice() {
  Book::setDefaultPrice();
  LOG();
  *this->price += *chapters * 100;
}

void Comics::setGenre(const std::string value) {
  LOG(value);
  *this->genre = value;
}
const std::string Comics::getGenre() const {
  LOG(*genre);
  return *genre;
}

void Comics::setChapters(const int value) {
  LOG(value);
  initChapters(value);
}
const int Comics::getChapters() const {
  LOG(*chapters);
  return *chapters;
}