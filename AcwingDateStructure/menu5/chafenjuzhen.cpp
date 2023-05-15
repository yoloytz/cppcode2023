#include <bits/stdc++.h>

using namespace std;

const int N = 1010;

int m, n, q;
int a[N][N], b[N][N];

void insert(int x1, int y1, int x2, int y2, int s){
    b[x1][y1] += s;
    
    b[x1][y2 + 1] -= s;
    b[x2 + 1][y1] -=s;

    b[x2 + 1][y2 + 1] += s;
}

int main(){
    cin >> n >> m >> q;
    for(int i = 1; i <= n; i ++ ){
        for(int j = 1; j <= m ;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 1; i <= n; i ++ ){
        for(int j = 1; j <=m ;j ++){
            insert(i, j, i, j, a[i][j]);
        }
    }

    while(q -- ){
        int x1, y1, x2, y2, s;
        cin >> x1 >> y1 >> x2 >> y2 >> s;
        insert(x1, y1, x2, y2 , s);
    }
    
    for(int i = 1; i <= n; i ++ ){
        for(int j = 1; j <= m ;j ++ ){
            a[i][j] = a[i-1][j] + a[i][j-1] - a[i-1][j-1] + b[i][j];
        }
    }

    for(int i = 1; i <= n; i ++ ){
        for(int j = 1; j <=m ;j ++){
            printf("%d ",a[j][j]);
        }
        puts("");
    }
    return 0;
}
