/*
 * Преамбула
 *
 * Выполнил: Боков Назар Алексеевич
 * Группа: ПМИ-251
 *
 * Данная программа является реализацией
 * методов описанных в заголовочном файле
 * класса "Учебник" - textbook.hpp
 *
 */

#include <iostream>

#include "textbook.hpp"

Textbook::Textbook() : Book() {
  std::cout << "Textbook()\n";
  setSubject("");
  setDifficulty(0);
}

Textbook::Textbook(const std::string title, const std::string author,
                   const int pages, const double price, const bool isAvailable,
                   const std::string subject, const int difficulty)
    : Book(title, author, pages, price, isAvailable) {
  std::cout << "Textbook(" << title << ", " << author << ", " << pages << ", "
            << price << ", " << isAvailable << ", " << subject << ", "
            << difficulty << ")\n";
  setSubject(subject);
  setDifficulty(difficulty);
}

void Textbook::initDifficulty(const int value) {
  std::cout << "initDifficulty(" << value << ")\n";
  if (value < 0 || value > 10) {
    std::cout << "Invalid difficulty: " << value
              << "\nDifficulty must be in range 1-10!\n";
    exit(1);
  }
  *this->difficulty = value;
}

void Textbook::setSubject(const std::string value) {
  *this->subject = value;
  std::cout << "setSubject(" << value << ")\n";
}
const std::string Textbook::getSubject() const {
  std::cout << "getSubject() = " << *subject << "\n";
  return *subject;
}

void Textbook::setDifficulty(const int value) {
  std::cout << "setDifficulty(" << value << ")\n";
  initDifficulty(value);
}
const int Textbook::getDifficulty() const {
  std::cout << "getDifficulty() = " << *difficulty << "\n";
  return *difficulty;
}