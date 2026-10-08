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
  int choice = 0;
  std::cout << "Choose book type.\n1 - Regular book\n"
               "2 - Comics\n3 - Textbook\n[1-3]: ";
  std::cin >> choice;

  Book* book = nullptr;

  if (choice == 1) {
    book = new Book("Обычная книга", "Штуклер", 150, 5, true);
  } else if (choice == 2) {
    book = new Comics("Бетмен и Ко.", "Жан Кок", 100, 5, true, "триллер", 2);
  } else if (choice == 3) {
    book = new Textbook("Как какать", "Акакий Акакиевич", 1002, 5, false,
                        "дефекация", 10);
  } else {
    std::cout << "Wrong choice.\n";
    return 1;
  }

  book->setDefaultPrice();

  delete book;
}
