#include <bits/stdc++.h>

using namespace std;

const int N = 6;

char g[N][N], tmp[N][N];
int dx[5] = {0, 0, 0, -1, 1};
int dy[5] = {0, 1, -1, 0, 0};

void turn(int x, int y){
    for(int i = 0; i < 5; i ++ ){
        int a = x + dx[i], b = y + dx[i];
        if(a < 0 || a > 4 || b < 0 || b > 4) continue;
        g[a][b] ^= 1;
    }
}

int main()
{
    int n;
    cin >> n;
    
    while(n --){
        for(int i = 0; i < 5; i ++){
            cin >> g[i];
        }
        int ret = 10;
        
        for(int op = 0; op < 32; op ++){
            memcpy(tmp, g, sizeof g);
            int step = 0;
            
            for(int i = 0; i < 5; i ++){
                if( op >> i & 1){
                    step ++;
                    turn(0,i);
                }
            }

            for(int i = 0; i < 4; i ++ ){
                for(int j = 0; i < 5; j ++){
                    if(g[i][j] == '0'){
                        step ++;
                        turn(i + 1,j);
                    }
                }
            }

            bool dark = false;
            for(int i = 0; i < 5; i++){
                if(g[4][i] == '0'){
                    dark = true;
                    break;
                }
            }
            if(!dark)  ret = min(ret,step);
            memcpy(g, tmp, sizeof g);
        }

        if(ret > 6){ ret = -1;}
        cout << ret << endl;
    }
    return 0;
}


/*
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 6;

char g[N][N], backup[N][N];
int dx[5] = {-1, 0, 1, 0, 0}, dy[5] = {0, 1, 0, -1, 0};

void turn(int x, int y)
{
    for (int i = 0; i < 5; i ++ )
    {
        int a = x + dx[i], b = y + dy[i];
        if (a < 0 || a >= 5 || b < 0 || b >= 5) continue;   // 在边界外，直接忽略即可
        g[a][b] ^= 1;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T -- )
    {
        for (int i = 0; i < 5; i ++ ) cin >> g[i];

        int res = 10;
        for (int op = 0; op < 32; op ++ )
        {
            memcpy(backup, g, sizeof g);
            int step = 0;
            for (int i = 0; i < 5; i ++ )
                if (op >> i & 1)
                {
                    step ++ ;
                    turn(0, i);
                }

            for (int i = 0; i < 4; i ++ )
                for (int j = 0; j < 5; j ++ )
                    if (g[i][j] == '0')
                    {
                        step ++ ;
                        turn(i + 1, j);
                    }

            bool dark = false;
            for (int i = 0; i < 5; i ++ )
                if (g[4][i] == '0')
                {
                    dark = true;
                    break;
                }

            if (!dark) res = min(res, step);
            memcpy(g, backup, sizeof g);
        }

        if (res > 6) res = -1;

        cout << res << endl;
    }

    return 0;
}

作者：yxc
链接：https://www.acwing.com/activity/content/code/content/159561/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。*/