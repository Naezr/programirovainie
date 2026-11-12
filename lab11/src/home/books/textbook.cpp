#include <iostream>
#include <stdexcept>

#include "textbook.hpp"

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

  setSubject(subject);
  setDifficulty(difficulty);
}

Textbook::~Textbook() {};

void Textbook::initDifficulty(const int value) {
  if (value < 0 || value > 10)
    throw new std::invalid_argument(
      "Difficulty must be in range 1-10!"
    );

  this->difficulty = value;
}

void Textbook::setDefaultPrice() {
  Book::setDefaultPrice();
  this->price *= difficulty;
}

void Textbook::setSubject(const std::string value) {
  this->subject = value;
}
const std::string Textbook::getSubject() const { return subject; }

void Textbook::setDifficulty(const int value) {
  initDifficulty(value);
}
const int Textbook::getDifficulty() const { return difficulty; }