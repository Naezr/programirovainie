#include <iostream>

#include "books/comics.hpp"
#include "books/textbook.hpp"

int main() {

  int choice = 0;
  std::cout << "Choose book type.\n"
               "1 - Comics\n2 - Textbook\n[1-2]: ";
  std::cin >> choice;

  Book *book = nullptr;

  if (choice == 1) {
    book = new Comics(
      "Бетмен и Ко.", "Жан Кок", 100, 5, true, "триллер", 2
    );
  } else if (choice == 2) {
    book = new Textbook(
      "Как какать", "Акакий Акакиевич", 1002, 5, false, "дефекация",
      10
    );
  } else {
    std::cout << "Wrong choice.\n";
    return 1;
  }

  Comics *comics = new Comics(
    "Приключения Петьки", "Виталя", 100, 500, true, "драма", 10
  );

  Textbook *textbook = new Textbook(
    "Программирование для чайников", "Чайник", 3, 10000, false,
    "Программирование", 1
  );

  std::cout << "Total Books created: " << Book::getObjCount() << "\n";

  delete book;
  delete comics;
  delete textbook;
}
