#include <iostream>
using namespace std;

class Date; // 前置声明

class Time {
private:
    int hour;
    int minute;
    int second;
public:
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}
    void display(Date& d); // 声明Date类为友元类
};

class Date {
private:
    int year;
    int month;
    int day;
public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}
    friend void Time::display(Date& d); // 声明Time类为友元类
    void display() {
        cout << year << "-" << month << "-" << day << endl;
    }
};

void Time::display(Date& d) {
    cout << d.year << "-" << d.month << "-" << d.day << " ";
    cout << hour << ":" << minute << ":" << second << endl;
}

int main() {
    Date d(2022, 10, 1);
    Time t(12, 30, 0);
    t.display(d);
    return 0;
}