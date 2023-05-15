#include <bits/stdc++.h>
using namespace std;


int get_ret(int x,int y){
    return y ? get_ret(y, x % y) : x;
}

int main(){
    int ret = get_ret(8,16);
    cout << ret << endl;
    
    return 0;
}