#include <iostream>

#include "textbook.hpp"

#include "log.hpp"

Textbook::Textbook() : Book() {
  std::cout << "Textbook()\n";
  setSubject("");
  setDifficulty(0);
}

Textbook::Textbook(
  const std::string title, const std::string author, const int pages,
  const double price, const bool isAvailable,
  const std::string subject, const int difficulty
)
  : Book(title, author, pages, price, isAvailable) {
  LOG(title, author, pages, price, isAvailable, subject, difficulty);
  setSubject(subject);
  setDifficulty(difficulty);
}

Textbook::~Textbook() { LOG(); };

void Textbook::initDifficulty(const int value) {
  LOG(value);
  if (value < 0 || value > 10) {
    std::cout << "Invalid difficulty: " << value
              << "\nDifficulty must be in range 1-10!\n";
    exit(1);
  }
  this->difficulty = value;
}

void Textbook::setDefaultPrice() {
  Book::setDefaultPrice();
  LOG();
  this->price *= difficulty;
}

void Textbook::setSubject(const std::string value) {
  LOG(value);
  this->subject = value;
}
const std::string Textbook::getSubject() const {
  LOG(subject);
  return subject;
}

void Textbook::setDifficulty(const int value) {
  LOG(value);
  initDifficulty(value);
}
const int Textbook::getDifficulty() const {
  LOG(difficulty);
  return difficulty;
}