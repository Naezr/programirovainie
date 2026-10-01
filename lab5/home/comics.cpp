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

Comics::Comics() : Book() {
  std::cout << "Comics()\n";
  setGenre("");
  setChapters(0);
}

Comics::Comics(const std::string title, const std::string author,
               const int pages, const double price, const bool isAvailable,
               const std::string genre, const int chapters)
    : Book(title, author, pages, price, isAvailable) {
  std::cout << "Comics(" << title << ", " << author << ", " << pages << ", "
            << price << ", " << isAvailable << ", " << genre << ", " << chapters
            << ")\n";
  setGenre(genre);
  setChapters(chapters);
}

void Comics::initChapters(const int value) {
  std::cout << "initChapters(" << value << ")\n";
  if (value < 0) {
    std::cout << "Invalid chapters count: " << value
              << "\nChapters count must be positive!\n";
    exit(1);
  }
  *this->chapters = value;
}

void Comics::setGenre(const std::string value) {
  *this->genre = value;
  std::cout << "setSubject(" << value << ")\n";
}
const std::string Comics::getGenre() const {
  std::cout << "getSubject() = " << *genre << "\n";
  return *genre;
}

void Comics::setChapters(const int value) {
  std::cout << "setChapters(" << value << ")\n";
  initChapters(value);
}
const int Comics::getChapters() const {
  std::cout << "getChapters() = " << *chapters << "\n";
  return *chapters;
}