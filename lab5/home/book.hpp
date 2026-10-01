#pragma once

/*
 * Преамбула
 *
 * Выполнил: Боков Назар Алексеевич
 * Группа: ПМИ-251
 *
 * Данная программа является
 * заголовочным файлом для класса "Книга"
 *
 */

#include <string>

class Book {
  std::string* title = new std::string;
  std::string* author = new std::string;
  int* pages = new int;
  double* price = new double;
  bool* isAvailable = new bool;

  void initPages(const int value);
  void initPrice(const double value);

public:
  Book();
  Book(const std::string title, const std::string author, const int pages,
       const double price, const bool isAvailable);
  Book(const std::string title, const std::string author, const int pages);

  ~Book();

  void setTitle(const std::string value);
  const std::string getTitle() const;

  void setAuthor(const std::string value);
  const std::string getAuthor() const;

  void setPages(const int value);
  const int getPages() const;

  void setPrice(const double value);
  const double getPrice() const;

  void setAvailable(const bool value);
  const bool getAvailable() const;

  void take();
  void giveBack();
};