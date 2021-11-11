#include <iostream>
#include <cstring>
#include "string.h"

void StupidTest() {
  String my_non_str;
  String amogus = "amogus";
  String bebra(5, 'c');
  String biba = bebra;
  bebra = amogus;
  std::cout << "wow! you are great! no CE and RE...\n yet.....\n";
}

void TestConstructor() {
  //String aboba = "aboba";
  //if (aboba.size == )

}

void TestSize() {
  std::cout << "\tTEST OF SIZE\n";
  String strs[5];
  String str1 = "aaaaaaa";
  strs[0] = str1;
  String str2(15, 'a');
  strs[1] = str2;
  String str3;
  strs[2] = str3;
  String str4;
  String str5 = "mememe";
  str4 = str1;
  str5 = str2;
  strs[3] = str4;
  strs[4] = str5;
  size_t answers[5] = { 7, 15, 0, 7, 15 };
  for (int i = 0; i < 5; ++i) {
    if (answers[i] == strs[i].length()) {
      std::cout << "minitest " << i + 1 << " is correct\n";
    }
    else {
      std::cout << "hahaha! test " << i + 1 << " is wrong\n";
    }
  }
  std::cout << '\n';
}

void TestBrackets() {
  std::cout << "\tTest operator of square brackets\n";
  String str1 = "aboba";
  String str2(15, 'y');
  String str3;
  String str4 = "musor";
  str3 = str1;
  str4 = str1;
  char right_answers[4] = { 'a', 'y', 'o', 'b' };
  char my_answers[4] = { str1[0], str2[14], str3[2], str4[3] };
  for (int i = 0; i < 4; ++i) {
    if (right_answers[i] == my_answers[i]) {
      std::cout << "minitest " << i + 1 << " is OK\n";
    }
    else {
      std::cout << "loshara in test " << i + 1 << '\n';
    }
  }
  std::cout << '\n';
}

void TestFrontBack() {
  std::cout << "\tTest front and back methods\n";
  String str1 = "frontback";
  String str2(20, 'c');
  String str3;
  str3 = "backfront";
  String str4 = str1;
  const String str5 = str2;
  char my_answers[10] = { str1.front(), str2.front(), str3.front(), str4.front(), str5.front(), str1.back(), str2.back(), str3.back(), str4.back(), str5.back() };
  char right_answers[10] = { 'f', 'c', 'b', 'f', 'c', 'k', 'c', 't', 'k', 'c' };
  for (int i = 0; i < 10; ++i) {
    if (my_answers[i] == right_answers[i]) {
      std::cout << "minitest " << i + 1 << "OK\n";
    }
    else {
      std::cout << "OAOOAOAOOAOOAOAOO in test " << i + 1 << '\n';
    }
  }
  str1.front() = 'a';
  str2.front() = 's';
  str3.back() = 'd';
  str4.back() = 'f';
  char my_answers2[8] = { str1[0], str2[0], str1.front(), str2.front(), str3[str3.length() - 1], str4[str4.length() - 1], str3.back(), str4.back() };
  char right_answers2[8] = { 'a', 's', 'a', 's', 'd', 'f', 'd', 'f' };
  for (int i = 0; i < 8; ++i) {
    if (my_answers2[i] == right_answers2[i]) {
      std::cout << "minitest " << i + 11 << " ok\n";
    }
    else {
      std::cout << "OAOOAOAOOAOOAOAOO in test " << i + 11 << '\n';
    }
  }
}

void TestPopPush() {
  std::cout << "\t\t Test pop_back and push_back\n";
  String str1;
  String str2(10, 'c');
  String str3("biba");
  for (int i = 0; i < 10; ++i) {
    str1.push_back('a');
  }
  if (str1.length() == 10 && str1.front() == 'a' && str1.back() == 'a' && str1[4] == 'a') {
    std::cout << "test 1 ok\n";
  }
  else {
    std::cout << "I waited for it. But in first test....\n";
  }
  for (int i = 0; i < 4; ++i) {
    str2.pop_back();
  }
  if (str2.length() == 6 && str2.front() == 'c' && str2.back() == 'c' && str2[3] == 'c') {
    std::cout << "test 2 ok\n";
  }
  else {
    std::cout << "bad bad bad at test 2\n";
  }
  for (int i = 0; i < 4; ++i) {
    str3.pop_back(); //проверим front and back
  }
  if (str3.length() == 0) {
    std::cout << "test 3 ok\n";
  }
  else {
    std::cout << "soaooaoaooaao test 3 wrong. seriously?\n";
  }
  for (int i = 0; i < 15; ++i) {
    str3.push_back('r');
  }
  str3.push_back('e');
  if (str3.length() == 16 && str3.front() == 'r' && str3.back() == 'e' && str3[2] == 'r') {
    std::cout << "test 4 ok \n";
  }
  else {
    std::cout << "hahhahahahhahahahahahh a4 loh\n";
  }
  for (int i = 0; i < 14; ++i) {
    str3.pop_back();
  }
  if (str3.length() == 2 && str3.front() == 'r' && str3.back() == 'r' && str3[2] == 'r') {
    std::cout << "test 5 ok \n";
  }
  else {
    std::cout << "hard hard hard and you are not ok\n";
  }
  str3.push_back('a');
  for (int i = 0; i < 5; ++i) {
    str3.push_back('f');
  }
  if (str3.length() == 8 && str3.front() == 'r' && str3[2] == 'a' && str3.back() == 'f') {
    std::cout << "test 6 ok, you are great";
  }
  else {
    std::cout << "not perfect at test 6.... far from perfect\n";
  }
}

void GrandTest() {
  StupidTest();
  TestConstructor();
  TestSize();
  TestBrackets();
  TestFrontBack();
  TestPopPush();
}

int main() {
  GrandTest();

  return 0;
}