/*
小明正在玩一个“翻硬币”的游戏。
桌上放着排成一排的若干硬币。我们用 * 表示正面，用 o 表示反面（是小写字母，不是零）。
比如，可能情形是：**oo***oooo
如果同时翻转左边的两个硬币，则变为：oooo***oooo
现在小明的问题是：如果已知了初始状态和要达到的目标状态，每次只能同时翻转相邻的两个硬币,那么对特定的局面，最少要翻动多少次呢？
我们约定：把翻动相邻的两个硬币叫做一步操作。
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 110;

char g[N], aim[N];

void turn(int i){
    if(g[i] == 'o') g[i] = '*';
    else g[i] = 'o';
}

int main(){
    cin >> g >> aim;
    int ret = 0;

    int n = strlen(g);
    for(int i = 0; i < n; i ++ ){
        if(g[i] != aim[i]){
            turn(i),turn(i + 1);
            ret ++ ;}
    }

    cout << ret << endl;
}