#include <iostream>
using namespace std;
void fx(int n);
const int day = 7;
int main(){
    
    cout << "hello world" << endl; 
    int a = 10;
    cout << "a = " << a << endl;

    cout << "day = " << day << "\n";
    
    cout << " 请输入 一个 数字 n"<< endl;
    int n;
    cin >> n;
    int n3 = n * n * n;
    cout << "n的 三次方为 " << n3 << endl;
    fx(n);
    

    return 0;
}

void fx(int n){
    cout <<" 从n开始的十个数字的三次方为?" << endl;
    for(int i = n; i <= n+10; i++){
        int ret = i * i * i;
        cout << i << "的三次方为" << ret << endl;
        
    }
}