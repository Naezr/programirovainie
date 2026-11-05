#include <iostream>

#include "books/comics.hpp"
#include "books/textbook.hpp"
#include "bookshelf.hpp"

int main() {

  Comics *comics1 = new Comics(
    "Tale of Bipki", "Valera Pupkin", 100, 999.99, true, "cool", 12
  );

  Textbook *textbook1 = new Textbook(
    "Matematika", "Professor A", 60000, 100, false, "Maths", 10
  );

  Comics *comics2 = new Comics(
    "MstitelMenyi", "Morval", 12, 3000, true, "fantastico", 50
  );

  Bookshelf *shelf = Bookshelf::create({textbook1, comics1, comics2});

  shelf->setComicsChapters(1, 12);

  std::cout << shelf->getPrice() << "\n"
            << shelf->countAvailable() << "\n";
}
