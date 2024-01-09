//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

#include "string.hpp"
#include "logentry.hpp"
#include <iostream>
#include <vector>

//date constructor
Date::Date(String date){
  int start = 1;
  int end = (date.findch(0,':')) - 1;
  String sub = date.substr(start, end);
  std::vector<String> vec = sub.split('/');
  day = vec[0];
  month = vec[1];
  year = vec[2];
}
  
std::ostream& operator<<(std::ostream& out, const Date& date) {
  out << date.day << '/' << date.month << '/' << date.year;
  return out;
}
  

//time constructor
Time::Time(String time){
  int start = time.findch(0, ':');
  int end = time.length() -1;
  String sub = time.substr(start, end);
  std::vector<String> vec = sub.split(':');
  hour = vec[0];
  minute = vec[1];
  second = vec[2];
}

std::ostream& operator<<(std::ostream& out, const Time& time){
  out << time.hour << ':' << time.minute << ':'<< time.second << ' ';
  return out;
}

int convertToInt(String str){
  int length = str.length();
  char arr[length + 1];
  arr[length] = 0;
  for (int i = 0; i < length; ++i){
    arr[i] = str[i];
  }

  int i = 0;
  int num = 0;
  while(arr[i] != 0){
    num = (arr[i] - '0') + (num * 10);
    ++i;
  }
  return num;
}

// REQUIRES:
// ENSURES: 
//
LogEntry::LogEntry(String s) {
  
    std::vector<String> vec = s.split(' ');
    if (vec.size() == 10) {
   
    host = vec[0];

    Date temp(vec[3]);
    date = temp;
    
    Time temp2(vec[3]);
    time = temp2;
    
    request = vec[4] + vec[5] + vec[6] + vec[7];
    status = vec[8];

    int num = convertToInt(vec[9]);
    number_of_bytes = num;
    }
}

String LogEntry::getHost() const {
  return host;
}

int LogEntry::getBytes() const {
  return number_of_bytes;  
}

std::ostream& operator<<(std::ostream& out, const LogEntry& log) {
  out << log.host << " - - " << log.date << log.time << ' '
      << log.request << ' ' << log.status << " " << log.number_of_bytes
      << std::endl;
  return out;
}

// REQUIRES:
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& input) {
  
    std::vector<LogEntry> result;

    char chArray[300];
    while(!input.eof()){
      char ch = input.get();
      if(input.eof())break;
      for(int i = 0; ch != '\n'; ++i){
	chArray[i] = ch;
	ch = input.get();
	if(input.eof()) break;
	chArray[i+1] = 0;
      }
      String full(chArray);
      LogEntry log(full);
      result.push_back(log);
    }
    return result;
}

// REQUIRES:
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> &vec) {
  for (size_t i = 0; i < vec.size(); ++i){
    out << vec[i];
  }
}

// REQUIRES:
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& vec) {
  for (size_t i = 0; i < vec.size(); ++i){
    out << vec[i].getHost() << std::endl;
  }
}

/// REQUIRES:
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &bytes) {
  int result = 0;
  for (size_t i = 0; i < bytes.size(); ++i){
    result += bytes[i].getBytes();
  }
    return result;
}
