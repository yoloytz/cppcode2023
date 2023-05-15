#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int ret = n;
    int p1 = 0, p2 = 0;
    if(n<3){
        cout << n <<endl;
        return 0;
    }
    while(n>=3){
        ret += n/3;
        p1 = n%3;
        p2 = n/3;
        n = p1 + p2;
    }
    cout << ret << endl;
    return 0;
}