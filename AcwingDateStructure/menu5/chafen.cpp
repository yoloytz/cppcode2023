#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int n, m;
int a[N], b[N];

void insert(int l, int r, int x){
    b[l] += x;
    b[r + 1] -= x;
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i ++ ) scanf("%d",&a[i]);
    for(int i = 1; i <= n; i ++ ) insert(i, i, a[i]);
    
    while(m -- ){
        int l, r, x;
        cin >> l >> r >> x;
        insert(l, r, x);
    }
    
    for(int i = 1; i <= n; i ++ ) a[i] = a[i-1] + b[i];
    for(int i = 1; i <= n; i ++ ) cout << a[i] << endl;

    return 0;
}