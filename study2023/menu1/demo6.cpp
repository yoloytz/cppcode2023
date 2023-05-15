#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "This" << "is";
    cout << "a" << "c++";
    cout << "pro" << endl;
    return 0;
}

int main() {
    int a, b, c;
    cout << "请输入三个整数：" << endl;
    cin >> a >> b >> c;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    cout << "从小到大的顺序为：" << a << " " << b << " " << c << endl;
    return 0;
}