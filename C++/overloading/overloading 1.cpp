//  https://modoocode.com/173
//
//  C++
//
//  Created by 차은호 on 2023/04/04.
//
/* 함수의 오버로딩 */
#include <iostream>
//인수가 다르지만 함수명이 같은 함수 -> C++에선 다른 함수로 취급
void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "char : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

int main() {
  int a = 1;
  char b = 'c';
  double c = 3.2f;

  print(a);
  print(b);
  print(c);

  return 0;
}
