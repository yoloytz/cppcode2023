#include <bits/stdc++.h>

using namespace std;

const int N = 1010;

long x[N];
long f[N];

int main(){
    int m;
    cin >> m;
    for(int i = 1; i <= m; i ++ ){
        scanf("%ld", &x[i]);
    }
    for(int i = 1; i <= m; i ++ ){
        f[i] = 1;
        for(int j = 1; j < i; j ++ ){
            if(x[i] > x[j]){
                f[i] = max(f[i] , f[j] + 1);
                }
        }
    }
    long ret = 1;
    for(int i = 1; i <= m; i ++ ){
        ret = max(ret,f[i]);
    }

    cout << ret << endl;
    return 0;
}
//数据结构要统一 输入long数据时 要用 %ld方法