//  https://modoocode.com/173
//
//  C++
//
//  Created by 차은호 on 2023/04/04.
//
// 모호한 오버로딩
#include <iostream>

void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "double : " << x << std::endl; }

int main() {
  int a = 1;
  char b = 'c';
  double c = 3.2f;

  print(a);
  print(b);
  //error 발생 double을 인자로 가지는 함수가 없음.
  //컴파일러가 형변환을 하다보면 임의의 숫자 타입이 다른 임의의 숫자 타입으로 변환된다.
  //이 경우에 double이 char와 int로 변환되며 두 개의 함수가 사용가능해지며 오류가 발생한다.
  print(c);

  return 0;
}
