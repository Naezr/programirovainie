#include "bookshelf.hpp"
#include "books/comics.hpp"
#include "books/textbook.hpp"

#include <stdexcept>

void Bookshelf::push_back(Book *book) { books_.push_back(book); }

Bookshelf::Bookshelf(std::initializer_list<Book *> list) {
  for (auto b : list) books_.push_back(b);
}

Bookshelf::~Bookshelf() {
  for (Book *book : books_) delete book;
}

Bookshelf *Bookshelf::create(std::initializer_list<Book *> list) {
  return new Bookshelf(list);
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
  if (Textbook *tbook = dynamic_cast<Textbook *>(books_[index]))
    tbook->setSubject(subject);
  else throw new std::runtime_error("invalid book type");
}

void Bookshelf::setTextbookDifficulty(
  const int index, const int difficulty
) {
  if (Textbook *tbook = dynamic_cast<Textbook *>(books_[index]))
    tbook->setDifficulty(difficulty);
  else throw new std::runtime_error("invalid book type");
}

void Bookshelf::setComicsGenre(
  const int index, const std::string genre
) {
  if (Comics *comics = dynamic_cast<Comics *>(books_[index]))
    comics->setGenre(genre);
  else throw new std::runtime_error("invalid book type");
}

void Bookshelf::setComicsChapters(
  const int index, const int chapters
) {
  if (Comics *comics = dynamic_cast<Comics *>(books_[index]))
    comics->setChapters(chapters);
  else throw new std::runtime_error("invalid book type");
}