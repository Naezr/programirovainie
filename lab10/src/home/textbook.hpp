#pragma once

#include "book.hpp"

class Textbook : public Book {
  std::string subject;
  int         difficulty;

  void initDifficulty(const int value);

public:
  Textbook();
  Textbook(
    const std::string title, const std::string author,
    const int pages, const double price, const bool isAvailable,
    const std::string subject, const int difficulty
  );
  ~Textbook() override;

  void setDefaultPrice() override;

  void              setSubject(const std::string value);
  const std::string getSubject() const;

  void      setDifficulty(const int value);
  const int getDifficulty() const;
};