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

#include "book.hpp"
#include "comics.hpp"
#include "textbook.hpp"

int main() {
  Book* book = new Book("Tale of Bipki", "Vasya Pupkin", 100);

  std::cout << "\n\n--------------------------------\n\n";

  Textbook* uchebnik = new Textbook("Математика 5 класс", "Виталя и компания",
                                    12, 1999.99, false, "Математика", 1);

  std::cout << "\n\n--------------------------------\n\n";

  Comics* komiks =
      new Comics("Spider-мен против Алёши поповича", "Издательство Чинчизес",
                 900, 5590.99, true, "Фантастика", 15);
}
