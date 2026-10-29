#pragma once

#include <string>

class Ticket {
  int flightNum_;
  int duration_;

  std::string initials_;
  std::string destination_;

  static int totalTickets_;

protected:
  void initFlightNum_(const int flightNum);
  void initDuration_(const int duration);

public:
  Ticket();
  Ticket(const std::string &rawData);
  ~Ticket();

  void setFlightNum(const int flightNum);
  int  getFlightNum() const;

  void setDuration(const int duration);
  int  getDuration() const;

  void        setInitials(const std::string &initials);
  std::string getInitials() const;

  void        setDestination(const std::string &destination);
  std::string getDestination() const;

  static int getTotalTickets();
};

std::ostream &operator<<(std::ostream &os, const Ticket &t);