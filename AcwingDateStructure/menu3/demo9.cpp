/*
激光炸弹问题
前缀和问题
处理前缀和时将边界都+1 避免边界问题
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 5010;

int m, n;
int s[N][N];

int main(){
    int cnt, R;
    cin >> cnt >> R;
    R = min(5001,R);
    n = m = R;

    while(cnt -- ){
        int x, y, w;
        cin >> x >> y >> w;
        x ++, y ++;
        n = max(x, n);
        m = max(y, m);
        s[x][y] += w;
    }

    for(int i = 1; i <= n; i ++ ){
        for(int j = 1; j <= m; j ++ ){
            s[i][j] += s[i-1][j] + s[i][j-1] - s[i-1][j-1];
        }
    }
    int ret = 0;
    for(int i = R; i <= n ;i ++ ){
        for(int j = R; j<= m; j ++){
            ret = max(ret, s[i][j] - s[i-R][j] - s[i][j-R] + s[i-R][j-R]);
        }
    }
    cout << ret << endl;
    return 0;
}
