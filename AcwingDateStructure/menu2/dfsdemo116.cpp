/*
“飞行员兄弟”这个游戏，需要玩家顺利的打开一个拥有 16个把手的冰箱。
已知每个把手可以处于以下两种状态之一：打开或关闭。
只有当所有把手都打开时，冰箱才会打开。
把手可以表示为一个 4×4的矩阵，您可以改变任何一个位置 [i,j]上把手的状态。
但是，这也会使得第 i行和第 j列上的所有把手的状态也随着改变。
请你求出打开冰箱所需的切换把手的次数最小值是多少。
*/

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> PII;

const int N = 5;

char g[N][N],backup[N][N];

void turn_one(int x, int y){
    if(g[x][y] == '+')  g[x][y] = '-';
    else g[x][y] = '+';
}

void turn_all(int x, int y){
    for(int i = 0; i < 4; i ++){
        turn_one(x, i);
        turn_one(i, y);
    }
    turn_one(x,y);
}

int get(int x, int y){
    return x * 4 + y;
}

int main(){
    for(int i = 0; i < 4; i ++ )  cin >> g[i];

    vector<PII> res;
    for(int op = 0; op < 1 << 16; op ++ ){
        vector<PII> temp;
        memcpy(backup, g, sizeof g);
        for(int i = 0; i < 4; i ++)
            for(int j = 0; j < 4; j ++ )
                if( op >> get(i, j) & 1){
                    
                    turn_all(i ,j);
                    temp.push_back({i, j});
                }
        
        bool has_closed = false;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(g[i][j] = '+'){
                    has_closed = true;
                }
            }
        }
        if(has_closed == false){
            if( res.empty() || res.size() > temp.size())  res = temp;
        }
        memcpy(g, backup, sizeof g);
    }
    cout << res.size() << endl;
    for (auto op : res) cout << op.first + 1 << ' ' << op.second + 1 << endl;
    return 0;
}
