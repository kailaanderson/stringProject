//
// File:        logentry.hpp
//
// Version:     1.0
// Date:
// Author:
//
// Description: Class definition for a log entry.
//
//
//

#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

#include "string.hpp"
#include <iostream>
#include <vector>

class Date {
public:
            Date() {};
            Date(String);
  friend std::ostream& operator<<(std::ostream&, const Date&);
private:
    String  day, month, year;
    //made "int year" into a string
};


class Time {
  public:
            Time() {};
            Time(String);
  friend std::ostream& operator<<(std::ostream&, const Time&);
  private:
  String     hour, minute, second; //changed from string to int
};



class LogEntry {
public:
            LogEntry() {};  
            LogEntry(String); 
     String getHost() const; //gets host of log
        int getBytes() const; //gets bytes of string (& converts into int)
 friend int convertToInt(String); // converts number of bytes to int
 friend  std::ostream& operator<<(std::ostream&, const LogEntry&);

private:
  String  host; // = vector[0]
  Date    date; // date(vector[3]
  Time    time;// time(vector[3])
  String  request; // = [5]+[6]+[7]
  String  status;// = [8]
  int     number_of_bytes;// convert [9]
};


//
// Free functions
//

std::vector<LogEntry>   parse       (std::istream&); //read a line, put line into a string, call logentry constructor for string to turn into a log entry, push log entry into vector
void                    output_all  (std::ostream&, const std::vector<LogEntry> &);
void                    by_host     (std::ostream&, const std::vector<LogEntry> &);
int                     byte_count  (const std::vector<LogEntry>&);

#endif
