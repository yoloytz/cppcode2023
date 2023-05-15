/*
用二维的方式解决01背包问题
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1010;

int Num, Vmax;
int x[N][N];
int V[N], W[N];

int main(){
    
    cin >> Num >> Vmax;
    for(int i = 1; i <= Num; i ++ ){
        cin >> V[i] >> W[i];
    }
    
    for(int i = 1; i <= Num; i ++ ){
        for(int j = 0; j <= Vmax; j ++ ){
            x[i][j] = x[i - 1][j];
            if(j >= V[i])  x[i][j] = max(x[i][j], x[i-1][j-V[i]] + W[i]);
        }
    }

    cout << x[Num][Vmax] << endl;

    return 0;
}