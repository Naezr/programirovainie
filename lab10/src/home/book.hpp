#pragma once

#include <string>

class Book {
protected:
  std::string title;
  std::string author;
  int         pages;
  double      price;
  bool        isAvailable;

  void initPages(const int value);
  void initPrice(const double value);

public:
  Book();
  Book(
    const std::string title, const std::string author,
    const int pages, const double price, const bool isAvailable
  );
  Book(
    const std::string title, const std::string author, const int pages
  );

  virtual ~Book();

  virtual void setDefaultPrice() = 0;

  void              setTitle(const std::string value);
  const std::string getTitle() const;

  void              setAuthor(const std::string value);
  const std::string getAuthor() const;

  void      setPages(const int value);
  const int getPages() const;

  void         setPrice(const double value);
  const double getPrice() const;

  void       setAvailable(const bool value);
  const bool getAvailable() const;

  void take();
  void giveBack();
};