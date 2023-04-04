//
//  C++
//
//  Created by 차은호 on 2023/04/04.
//
/* 함수의 오버로딩 */
#include <iostream>
//C와 달리 인수가 다르면 같은 함수명이여도 다른 함수로 취급
void print(int x) { std::cout << "int : " << x << std::endl; }
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
