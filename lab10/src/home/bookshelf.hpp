#pragma once

#include "books/book.hpp"

#include <initializer_list>
#include <vector>

class Bookshelf {
  std::vector<Book *> books_;

public:
  void push_back(Book *book);

  Bookshelf() = default;
  Bookshelf(std::initializer_list<Book *>);
  ~Bookshelf();

  static Bookshelf *create(std::initializer_list<Book *>);

  void setBookTitle(const int index, const std::string title);
  void setBookAuthor(const int index, const std::string author);
  void setBookPages(const int index, const int pages);
  void setBookPrice(const int index, const double price);
  void setBookAvailable(const int index, const double isAvailable);

  void setTextbookSubject(const int index, const std::string subject);
  void setTextbookDifficulty(const int index, const int difficulty);

  void setComicsGenre(const int index, const std::string genre);
  void setComicsChapters(const int index, const int chapters);

  double getPrice() const;
  int    countAvailable() const;
};