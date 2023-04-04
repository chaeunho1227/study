//
//  main.cpp
//  overloading
//
//  Created by 차은호 on 2023/04/04.
//
/* 함수의 오버로딩 */
#include <iostream>
//함수의 이름은 같지만 인수가 다름 -> 다른 함수로 인식
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
