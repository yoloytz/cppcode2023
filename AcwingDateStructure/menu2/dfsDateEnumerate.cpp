#include <iostream>

using namespace std;

const int N = 16;

int St[N];//记录状态 0代表未记录 1代表不选择 2代表选择
int n;

void dfs(int u){
    if( u > n){
        for(int i = 1; i <= n; i ++)
            if( St[i] == 1)
                printf("%d ", i);

        printf("\n");  
        return;
    }

    St[u] = 1;//不选
    dfs(u + 1);
    St[u] = 0;//恢复现场

    St[u] = 2;//选择
    dfs(u + 1);
    St[u] = 0;//恢复现场
}

int main(){
    
    cin >> n;

    dfs(1);

    return 0;
}