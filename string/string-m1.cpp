// function implementations 
// Kaila Anderson 
// CS23001 Project 2 

#include<iostream> 
#include "string.hpp" 

  
String::String(){ 
  str[0] = 0; 
} 

String::String(char ch){ 
  str[0] = ch; 
  str[1] = 0; 
} 

  

String::String(const char ch[]){ 
  int len = 0; 
  while (ch[len] != 0) ++len; 

  for (int i = 0; i < len; ++i) 
    str[i] = ch[i]; 
  str[len] = 0; 
} 

  

int String::capacity() const { 
  return STRING_SIZE - 1; 
} 

  

int String::length() const{ 
  int length = 0; 
  while (str[length] != 0) ++length; 
  return length; 
} 

  

char& String::operator[](int index){ 
  if (index < 0 || index >= STRING_SIZE){ 
    std::cout << "index is out of range"; 
    return str[0]; 
  } 
  else 
    return str[index]; 
} 

  

char String::operator[](int index) const { 
  if(index < 0 || index >= STRING_SIZE){ 
    std::cout << "index is out of range"; 
    return str[0]; 
  } 
  else 
    return str[index]; 

} 

  

String& String::operator+= (const String& rhs){ 
  int length = this->length(); 
  int rhsLength = rhs.length(); 

  for(int i = 0; i < rhsLength; ++i){ 
    if (i + length >= capacity()) break; 
    str[i + length] = rhs.str[i]; 
  } 
  str[length + rhsLength] = 0; 
  return *this; 
} 

  

bool String::operator== (const String& rhs) const{ 
  for (int i = 0; i < length(); ++i){ 
    if (str[i] != rhs.str[i]) return false; 
  } 
  return true; 

} 

  

bool String::operator< (const String& rhs) const{ 

  int i = 0; 
  while ((str[i] != 0) && (rhs.str[i] != 0) && (str[i] == rhs.str[i])) 
    ++i; 
  return str[i] < rhs.str[i]; 
} 

  

String String::substr(int start, int end) const{ 
  String result; 

  if (start < 0) start = 0; 
  if (end < start) return result; 
  if (end >= length()) end = length() - 1; 

    for (int i = start; i <= end; ++i){ 
      result += str[i]; 
    } 
  return result; 

} 

  

int String::findch (int start, char ch) const{ 
  if (start < 0) start = 0; 
  if (start >= length()) return -1; 
 
  int i = start; 
  while ((str[i] != 0) && (str[i] !=ch)) ++i; 
  if (str[i] == ch) 
    return i; 
  else 
    return -1; 

} 

  

  

int String::findstr (int start, const String& chArray) const{ 
  if (start < 0) start = 0; 
  if (start >= length()) return -1; 

  int location = start; 
 
  while (chArray.length() + location <= length()){ 
    String temp = substr(location, location + chArray.length() - 1); 
    if (chArray == temp) 
      return location; 
    else 
      ++location; 
  } 
  return -1; 

} 

  

  

std::istream& operator>>(std::istream& input, String& object){
  input >> object.str;
  
  return input; 
} 

std::ostream& operator<<(std::ostream& out, const String& object){ 
  for(int i = 0; i < object.length(); ++i){ 
    out << object.str[i]; 
  } 
  return out; 

} 

// free functions 

  

String operator+ (String first, const String& second){ 
  String result; 
  result += first; 
  result += second; 
  return result; 
} 

  

bool operator==(const char ch[], const String& object){ 
  String chArray(ch); 
  return chArray == object; 
} 

  

bool operator==(char ch, const String& object){ 
  String character(ch); 
  return character == object; 
} 

  

bool operator< (const char ch[], const String& object){ 
  String chArray(ch); 
  return chArray < object; 
} 

  

bool operator< (char ch, const String& object){ 
  String character(ch); 
  return character < object; 
} 

  

bool operator <= (const String& one, const String& two){ 
  if (one == two) 
    return true; 
  else if (one < two) 
    return true; 
  else 
    return false; 
} 

  

bool operator!= (const String& one, const String& two){ 
  if (one == two) 
    return false; 
  return true; 
} 

  

bool operator >= (const String& one, const String& two){ 
  if (one == two) 
    return true; 
  else if (one < two) 
    return false; 
  else 
    return true; 
} 

  

bool operator > (const String& one, const String& two){ 
  if (one < two)
    return false; 
  return true; 
} 
