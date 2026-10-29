#include "ticket.hpp"

#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

int Ticket::totalTickets_ = 0;

void Ticket::initFlightNum_(const int flightNum) {
  if (flightNum <= 0)
    throw std::runtime_error("Invalid flight number!");
  flightNum_ = flightNum;
}

void Ticket::initDuration_(const int duration) {
  if (duration <= 0) throw std::runtime_error("Invalid duration!");
  duration_ = duration;
}

Ticket::Ticket() { totalTickets_++; }

Ticket::Ticket(const std::string &rawData) {
  totalTickets_++;

  using namespace std;
  stringstream   dataStream(rawData);
  string         item;
  vector<string> items;

  while (getline(dataStream, item, ';')) items.push_back(item);

  flightNum_   = stoi(items[0]);
  duration_    = stoi(items[3]);
  initials_    = items[1];
  destination_ = items[2];
}

Ticket::~Ticket() { /* does nothing, but it is realized */ }

void Ticket::setFlightNum(const int flightNum) {
  initFlightNum_(flightNum);
}

void Ticket::setDuration(const int duration) {
  initDuration_(duration);
}

void Ticket::setInitials(const std::string &initials) {
  initials_ = initials;
}

void Ticket::setDestination(const std::string &destination) {
  destination_ = destination;
}

int         Ticket::getFlightNum() const { return flightNum_; }
int         Ticket::getDuration() const { return duration_; }
std::string Ticket::getInitials() const { return initials_; }
std::string Ticket::getDestination() const { return destination_; }

std::ostream &operator<<(std::ostream &os, const Ticket &t) {
  os << "Рейс №" << t.getFlightNum()
     << ", Пассажир: " << t.getInitials()
     << ", Летит в: " << t.getDestination() << ", Длительность "
     << t.getDuration() << " минут";
  return os;
}

int Ticket::getTotalTickets() { return totalTickets_; }