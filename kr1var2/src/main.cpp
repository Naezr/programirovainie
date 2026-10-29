#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "ticket.hpp"

int main() {
  using namespace std;
  fstream file("tickets.txt");
  if (!file.is_open()) throw runtime_error("tickets.txt not found");

  string         rawTicket;
  vector<string> rawTickets;

  getline(file, rawTicket); // skip 1 line

  while (getline(file, rawTicket))
    if (!rawTicket.empty()) rawTickets.push_back(rawTicket);

  cout << "Все билеты:\n\n";
  vector<Ticket> tickets;
  for (string rawData : rawTickets) {
    Ticket t(rawData);
    cout << t << "\n";
    tickets.push_back(t);
  }

  cout << "\nСидоровы:\n\n";
  for (Ticket t : tickets)
    if ((t.getInitials()).find("Сидоров") != std::string::npos)
      cout << t << "\n";

  cout << "\nСоздано объектов: " << Ticket::getTotalTickets() << '\n';
}