#pragma once

/*
 * Преамбула
 *
 * Выполнил: Боков Назар Алексеевич
 * Группа: ПМИ-251
 *
 * Данная программа является
 * заголовочным файлом для класса "Комикс"
 * основанного на классе "Книга"
 *
 * genre - жанр комикса
 * chapters - количество глав
 *
 */

#include "book.hpp"

class Comics : public Book {
  std::string* genre = new std::string;
  int* chapters = new int;

  void initChapters(const int value);

public:
  Comics();
  Comics(const std::string title, const std::string author, const int pages,
         const double price, const bool isAvailable, const std::string genre,
         const int chapters);
  ~Comics() override;

  void setDefaultPrice() override;

  void setGenre(const std::string value);
  const std::string getGenre() const;

  void setChapters(const int value);
  const int getChapters() const;
};