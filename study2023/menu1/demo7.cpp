#include <bits/stdc++.h>
using namespace std;

struct stu 
{
    int no;
    int grade;
    /* data */
}a[5];

int main(){
    for(int i = 0; i < 5; i ++ ){
        a[i].no = i + 1;
        a[i].grade = rand() % 51 + 50;
    }
    for(int i = 0; i < 5; i ++ ){
        cout << "学号为 "  << a[i].no << "成绩为" <<
        a[i].grade << endl;
    }

    return 0;
}
