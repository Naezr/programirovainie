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

  std::cout << "Before:\n"
            << "Shelf price: " << shelf->getPrice() << "\n"
            << "Available books: " << shelf->countAvailable() << "\n";

  for (int i = 0; i < 3; ++i)
    std::cout << shelf->getBook(i)->getTitle() << ", "
              << shelf->getBook(i)->getAuthor() << "\n";

  shelf->setComicsGenre(1, "very cool");
  shelf->setComicsChapters(2, 42);

  shelf->setTextbookDifficulty(0, 3);
  shelf->setTextbookSubject(0, "test sub");

  shelf->setBookAvailable(0, true);
  shelf->setBookAuthor(2, "Valera");
  shelf->setBookPages(0, 200);
  shelf->setBookPrice(1, 199.99);
  shelf->setBookTitle(2, "Mstitely and Meniy");

  std::cout << "After:\n"
            << "Shelf price: " << shelf->getPrice() << "\n"
            << "Available books: " << shelf->countAvailable() << "\n";

  for (int i = 0; i < 3; ++i)
    std::cout << shelf->getBook(i)->getTitle() << ", "
              << shelf->getBook(i)->getAuthor() << "\n";
}
