#include <iostream>

#include "books/comics.hpp"
#include "books/textbook.hpp"
#include "bookshelf.hpp"

int main() {
  Bookshelf shelf;
  Comics   *comics1 = new Comics(
    "Tale of Bipki", "Valera Pupkin", 100, 999.99, true, "cool", 12
  );

  Textbook *textbook1 = new Textbook(
    "Matematika", "Professor A", 60000, 100, false, "Maths", 10
  );

  Comics *comics2 = new Comics(
    "MstitelMenyi", "Morval", 12, 3000, true, "fantastico", 50
  );

  shelf.push_back(comics1);
  shelf.push_back(textbook1);
  shelf.push_back(comics2);

  std::cout << shelf.getPrice() << "\n"
            << shelf.countAvailable() << "\n";
}
