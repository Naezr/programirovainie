#include <string>

class Book {
  std::string title;
  std::string author;
  int pages;
  double price;
  bool isAvailable;

public:
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