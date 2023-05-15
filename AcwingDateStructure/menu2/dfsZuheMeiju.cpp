/* 1∼n这 n 个整数中随机选出 m 个，输出所有可能的选择方案。
输入格式 两个整数 n,m ,在同一行用空格隔开。
输出格式 按照从小到大的顺序输出所有方案，每行 1个。
首先，同一行内的数升序排列，相邻两个数用一个空格隔开。
其次，对于两个不同的行，对应下标的数一一比较，字典序较小的排在前面（例如 1 3 5 7 排在 1 3 6 8 前面）。
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 30;

int n, m;
int way[N];

void dfs(int u, int start){
    if (u + n - start < m) return;
    if (u == m + 1){
        for(int i = 1; i <= m; i ++ ){
            printf("%d ",way[i]);            
        }
        puts("");
        return;
    }

    for(int i = start; i <= n; i ++ ){
        way[u] = i;
        dfs(u + 1, i + 1);
        way[u] = 0;
    }
}

int main(){
    cin >> n >> m;
    
    dfs(1, 1);

    return 0; 
}