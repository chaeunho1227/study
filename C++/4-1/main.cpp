//
//  main.cpp
//  C++
//  문제 4-1
//  출처 : https://modoocode.com/172
//  여러분은 아래와 같은 Date 클래스를 디자인 하려고 합니다. SetDate 는 말그대로 Date 함수 내부를 초기화 하는 것이고 AddDay, AddMonth, AddYear 는 일, 월, 년을 원하는 만큼 더하게 됩니다. 한 가지 주의할 점은 만일 2012 년 2 월 28 일에 3 일을 더하면 2012 년 2 월 31 일이 되는 것이 아니라 2012 년 3 월 2 일이 되겠지요? (난이도 : 上)
//  Created by 차은호 on 2023/03/29.
//
#include <iostream>
using namespace std;
class Date {
    private:
        int year_;
        int month_;  // 1 부터 12 까지.
        int day_;    // 1 부터 31 까지.
        int is_over_day = 1;
     public:
        void SetDate(int year, int month, int date){
            year_=year;
            month_=month;
            day_=date;
        };
        void AddDay(int inc){
            day_+=inc;
        };
        void AddMonth(int inc){
            month_+=inc;
        };
        void AddYear(int inc){
            year_+=inc;
        };
        void RoundUpDate(){
            while (is_over_day) {
                while (month_ >= 13) {
                    month_-=12;
                    year_++;
                }
                switch (month_) {
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        if (day_ <= 31)
                            is_over_day = 0;
                        else{
                            day_-=31;
                            month_++;
                        }
                        break;
                    case 4: case 6: case 9: case 11:
                        if (day_ <= 30) {
                            is_over_day = 0;
                        }
                        else{
                            day_-=30;
                            month_++;
                        }
                        break;
                    case 2:
                        //윤년
                        if (((year_ % 4) == 0 && (year_ % 100) != 0) || (year_ % 400) == 0) {
                            if(day_ <= 29)
                                is_over_day = 0;
                            else{
                                day_-=29;
                                month_++;
                            }
                        }
                        //윤년이 아닐때
                        else{
                            if(day_ <= 28)
                                is_over_day = 0;
                            else{
                                day_-=28;
                                month_++;
                            }
                        }
                        break;
                    default:
                        std::cout << "ERROR";
                        break;
                }
            }
        };
        void ShowDate(){
            std::cout << year_ << "." << month_ << "." << day_ << std::endl;
        };
};

int main() {
    Date date;
    date.SetDate(2022, 4, 3);
    date.AddDay(60);
    date.AddMonth(5);
    date.AddYear(3);
    date.RoundUpDate();
    date.ShowDate();
    return 0;
}

