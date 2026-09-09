#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct Table {
  int* size = new int(0);
  char color[20];
};

std::ostream& operator<<(std::ostream& os, const Table& table) {
  os << "Table(size: " << *table.size << ", color: " << table.color << ")";
  return os;
}

std::vector<Table> readTablesFromFile(std::string filename) {
  std::fstream file(filename);
  if (!file.is_open()) exit(1);

  std::vector<Table> tables;
  std::string line;
  while (std::getline(file, line)) {
    if (line.empty()) continue;
    std::stringstream sline(line);
    Table t;
    sline >> *t.size >> t.color;
    tables.push_back(t);
  }
  return tables;
}

int main() {
  std::vector<Table> tables = readTablesFromFile("data.txt");
  for (Table t : tables)
    if (*t.size < 100) std::cout << t << "\n";
}