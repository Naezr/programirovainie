#include "bookshelf.hpp"
#include "books/comics.hpp"
#include "books/textbook.hpp"

void Bookshelf::push_back(Book *book) { books_.push_back(book); }

Bookshelf::~Bookshelf() {
  for (Book *book : books_) delete book;
}

double Bookshelf::getPrice() const {
  double sum = 0;
  for (Book *b : books_) sum += b->getPrice();
  return sum;
}

int Bookshelf::countAvailable() const {
  int count = 0;
  for (Book *b : books_) count += b->getAvailable();

  return count;
}

void Bookshelf::setBookTitle(
  const int index, const std::string title
) {
  books_[index]->setTitle(title);
}
void Bookshelf::setBookAuthor(
  const int index, const std::string author
) {
  books_[index]->setAuthor(author);
}

void Bookshelf::setBookPages(const int index, const int pages) {
  books_[index]->setPages(pages);
}

void Bookshelf::setBookPrice(const int index, const double price) {
  books_[index]->setPrice(price);
}
void Bookshelf::setBookAvailable(
  const int index, const double isAvailable
) {
  books_[index]->setAvailable(isAvailable);
}

void Bookshelf::setTextbookSubject(
  const int index, const std::string subject
) {
  dynamic_cast<Textbook *>(books_[index])->setSubject(subject);
}

void Bookshelf::setTextbookDifficulty(
  const int index, const int difficulty
) {
  dynamic_cast<Textbook *>(books_[index])->setDifficulty(difficulty);
}

void Bookshelf::setComicsGenre(
  const int index, const std::string genre
) {
  dynamic_cast<Comics *>(books_[index])->setGenre(genre);
}

void Bookshelf::setComicsChapters(
  const int index, const int chapters
) {
  dynamic_cast<Comics *>(books_[index])->setChapters(chapters);
}