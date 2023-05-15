#include <bits/stdc++.h>
using namespace std;

bool dfs(int q, int m, int n){
    if(!q) return true;
    if(q >= m && dfs(q - m, m, n)) return true;
    if(q >= n && dfs(q - n, m, n)) return true;
    return false;
}

int main(){
    int m, n;
    cin >> m >> n;
    int res = 0;
    for(int i = 0; i < 1000; i ++ ){
        if(!dfs(i, m, n)) res = i;
    }
    cout << res << endl;
    return 0;
}