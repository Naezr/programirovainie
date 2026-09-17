#include <iostream>
#include <string>

#include "book.hpp"

int main() {
  Book book;

  book.setTitle("Tale of Bipki");
  book.setAuthor("Vasya Pupkin");
  book.setPages(420);
  book.setPrice(67.67);
  book.setAvailable(true);

  std::cout << "\n";

  std::string title = book.getTitle();
  std::string author = book.getAuthor();
  int pages = book.getPages();
  double price = book.getPrice();
  bool isAvailable = book.getAvailable();

  std::cout << "\nBook data:\n"
            << title << " - " << author << "\nPages: " << pages
            << "\nPrice: " << price << "\nAvailability: " << isAvailable
            << "\n\n";

  book.take();
  book.take();
  book.giveBack();
  book.giveBack();

  std::cout << "\n";
}