#pragma once

#include "table.hpp"

class CompTable : public Table {
  int* standSize = new int;
  char* material = new char[20];

  void initStandSize(const int value);

public:
  CompTable();
  CompTable(const int size, const char* color, const int standSize,
            const char* material);
  ~CompTable() override;

  void setStandSize(const int value);
  const int getStandSize() const;

  void setMaterial(const char* value);
  const char* getMaterial() const;

  const int calcVolume() const override;
};