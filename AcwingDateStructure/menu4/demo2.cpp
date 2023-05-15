#include <bits/stdc++.h>
using namespace std;

const int N = 55;

int x[N];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++ ){
        cin >> x[i];
    }
    int left = 0, right = 0;
    for(int i = 1; i < n; i ++ ){
        if(abs(x[i]) > abs(x[0])  &&  x[i] < 0) right ++ ;
        if(abs(x[i]) < abs(x[0])  &&  x[i] > 0) left ++ ;
    }
    if(x[0] > 0 && right == 0 || x[0] < 0 && left == 0) cout << 1 << endl;
    else cout << left + right + 1 << endl;

    return 0;
}