#pragma once

/*
 * Преамбула
 *
 * Выполнил: Боков Назар Алексеевич
 * Группа: ПМИ-251
 *
 * Данная программа является
 * заголовочным файлом для класса "Учебник"
 * основанного на классе "Книга"
 *
 * subject - предмет изучения
 * difficulty - сложность учебника
 *
 */

#include "book.hpp"

class Textbook : Book {
  std::string* subject = new std::string;
  int* difficulty = new int;

  void initDifficulty(const int value);

public:
  Textbook();
  Textbook(const std::string title, const std::string author, const int pages,
           const double price, const bool isAvailable,
           const std::string subject, const int difficulty);

  void setSubject(const std::string value);
  const std::string getSubject() const;

  void setDifficulty(const int value);
  const int getDifficulty() const;
};