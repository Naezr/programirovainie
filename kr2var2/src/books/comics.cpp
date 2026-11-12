#include <iostream>

#include "comics.hpp"

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

  setGenre(genre);
  setChapters(chapters);
}

Comics::~Comics() {}

void Comics::initChapters(const int value) {
  if (value < 0) {
    std::cout << "Invalid chapters count: " << value
              << "\nChapters count must be positive!\n";
    exit(1);
  }
  this->chapters = value;
}

void Comics::setDefaultPrice() {
  Book::setDefaultPrice();
  this->price += chapters * 100;
}

void Comics::setPriceWithDiscount() {
  Comics::setDefaultPrice();
  this->price -= 0.1 * this->chapters;
}

void Comics::setGenre(const std::string value) {

  this->genre = value;
}
const std::string Comics::getGenre() const { return genre; }

void Comics::setChapters(const int value) { initChapters(value); }
const int Comics::getChapters() const { return chapters; }