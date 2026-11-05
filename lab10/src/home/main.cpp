#include <iostream>

#include "bookshelf.hpp"
#include "comics.hpp"
#include "textbook.hpp"

int main() {
  Bookshelf shelf;
  Comics   *comics1 = new Comics(
    "Tale of Bipki", "Valera Pupkin", 100, 999.99, true, "cool", 12
  );
  std::cout << "\n\n";
  Textbook *textbook1 = new Textbook(
    "Matematika", "Professor A", 60000, 100, false, "Maths", 10
  );
  std::cout << "\n\n";

  Comics *comics2 = new Comics(
    "MstitelMenyi", "Morval", 12, 3000, true, "fantastico", 50
  );
  std::cout << "\n\n";
  shelf.push_back(comics1);
  shelf.push_back(textbook1);
  shelf.push_back(comics2);

  std::cout << shelf.getPrice() << "\n"
            << shelf.countAvailable() << "\n";
}
