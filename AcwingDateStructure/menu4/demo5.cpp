#include <bits/stdc++.h>

using namespace std;

const int N = 110;
int n, m;
int f[N][N];
int w[N][N];
int num;

int main(){
    cin >> num;
    while(num -- ){
        cin >> n >> m;
        for(int i = 1; i <= n; i ++ ){
            for(int j = 1; j <= m; j ++ ){
                scanf("%d",&w[i][j]);
            }
        }

        for(int i = 1; i <= n; i ++ )
            for(int j = 1; j <=m; j ++ )
                f[i][j] = max(f[i - 1][j],f[i][j - 1]) + w[i][j];
        
        cout << x[i][j] << endl;
    }
    
    return 0;
}