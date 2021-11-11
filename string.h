#ifndef STRING_H
#define STRING_H

//#include <iostream>
//#include <cstring>
class String {
public:
  //Constructors
  String() {}
  String(const char* s) {
    capacity = size = strlen(s);
    str = new char[size];
    memcpy(str, s, size);
  }
  String(size_t n, char c) : size(n), str(new char[n]) { //Can I use size instead n?
    capacity = n;
    memset(str, c, n);
  }
  //Constructors of copy
  String(const String& s) : size(s.size), str(new char[s.size]) {
    capacity = size;
    memcpy(str, s.str, size);
  }

  //Destructor
  ~String() {
    delete[] str;
  }

  //operators
  String& operator=(const String& s) {
    String copy = s;
    swap(copy);
    return *this;
  }
  //Square brackets for const and non-const
  char& operator[](size_t index) {
    return *(str + index);
  }
  const char& operator[](size_t index) const {
    return *(str + index);
  }
  size_t length() {
    return size;
  }
  //Methods 
  //push_back and pop_back
  void push_back(char c) {
    if (size == capacity) {
      String copy;
      copy.size = size;
      copy.capacity = capacity * 2;
      if (copy.capacity == 0) {
        ++copy.capacity;
      }
      copy.str = new char[copy.capacity];
      memcpy(copy.str, str, size);
      swap(copy);
    }
    str[size++] = c;
  }
  void pop_back() {
    if (4 * size <= capacity) {
      String copy;
      copy.size = size;
      copy.capacity = capacity / 2;
      copy.str = new char[copy.capacity];
      memcpy(copy.str, str, size);
      swap(copy);
    }
    --size; // should we put '\0' there??? str[--size] = '\0'
  }

  char& front() {
    return str[0];
  }
  const char& front() const {
    return str[0];
  }
  char& back() {
    return str[size - 1];
  }
  const char& back() const {
    return str[size - 1];
  }

  //
  
private: 
  size_t size = 0;
  char* str = nullptr; //Maybe we should put in other order? Is there a difference? UPD: size at first to ask for memory of size
  size_t capacity = 0;
  void swap(String& copy) {
    std::swap(copy.str, str);
    std::swap(copy.size, size);
    std::swap(copy.capacity, capacity);
  }
};

#endif STRING_H