/*
 * Преамбула
 *
 * Выполнил: Боков Назар Алексеевич
 * Группа: ПМИ-251
 *
 * Данная программа является примером
 * класса "Книга" с демонстрацией
 * работы всех его методов
 *
 */

#include <iostream>
#include <string>

#include "book.hpp"

int main() {
  Book* book = new Book("Tale of Bipki", "Vasya Pupkin", 0);

  int pages;
  std::cout << "\nEnter pages count: ";
  std::cin >> pages;
  book->setPages(pages);

  int price;
  std::cout << "\nEnter price: ";
  std::cin >> price;
  book->setPrice(price);

  delete book;
}