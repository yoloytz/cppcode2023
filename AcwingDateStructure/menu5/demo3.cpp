#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int x[N];

int main(){
    int n;
    cin >> n;
    int ret = 0;
    for(int i = 1; i <= n; i ++ ){
        int x = i;
        while(x){
            int t = x % 10;
            x = x / 10;
            if(t == 2 || t == 0 || t == 1 || t == 9){
                ret ++ ;
                break;
            }
        }
    }
    cout << ret << endl;
    return 0;
}