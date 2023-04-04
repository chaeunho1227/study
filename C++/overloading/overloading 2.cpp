//  https://modoocode.com/173
//
//  C++
//
//  Created by 차은호 on 2023/04/04.
//
/* 함수의 오버로딩 */
#include <iostream>

//char를 인수로 가지는 함수가 없음
void print(int x) { std::cout << "int : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

int main() {
    int a = 1;
    char b = 'c';
    double c = 3.2f;

    print(a);
    //컴파일러가 가장 적합한 타입의 인수를 가지는 함수를 찾아 실행.
    print(b);
    print(c);

    return 0;
}
