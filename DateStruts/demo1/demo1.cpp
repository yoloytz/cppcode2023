#include <bits/stdc++.h>
using namespace std;

//手写栈和对stl栈的应用

const int N = 100010;
int a[N];
int top = 0;

void pushx(int x){
    a[top] = x;
    top ++ ;
}

int popx(){
    
    top --;
    return a[top + 1];
}

bool emptyx(){
    if(top == 0) return true;
    else return false;
}

int topx(){
    return a[top - 1];
} 

int main(){
    if(emptyx()) printf("为空");
    pushx(5);
    pushx(2);
    int x = topx();
    printf("%d",x);
    if(emptyx()) printf("为空");
    else printf("非空");
    popx();
    x = topx();
    printf("%d",x);


    printf("\n");
    stack<int> s;
    s.push(6);
    return 0;
}
