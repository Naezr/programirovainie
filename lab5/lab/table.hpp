#pragma once

class Table {
  int* size = new int;
  char* color = new char[20];

  void initSize(const int value);

public:
  Table();
  Table(const int size, const char* color);
  Table(const int size);
  ~Table();

  void setSize(const int value);
  const int getSize() const;

  void setColor(const char* value);
  const char* getColor() const;

  const int calcVolume() const;
};