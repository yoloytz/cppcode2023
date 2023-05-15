/*给出三条线段 a,b,ca,b,c 的长度，均是不大于 10000 的正整数。打算把这三条线段拼成一个三角形，它可以是什么三角形呢？

如果三条线段不能组成一个三角形，输出Not triangle；
如果是直角三角形，输出Right triangle；
如果是锐角三角形，输出Acute triangle；
如果是钝角三角形，输出Obtuse triangle；
如果是等腰三角形，输出Isosceles triangle；
如果是等边三角形，输出Equilateral triangle。*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int temp;
    if(a > b && a > c){
        if(c > b){
            temp = c;
            c = b;
            b = temp;
        }
    }
}