#include <bits/stdc++.h>

const int N = 15010;

int n;
int level[N], tree[N];

int lowbit(int x){
    return x & -x;
}

int add(int x){
    for(int i = x; i < N; i += lowbit(i)) tree[i] ++ ;
}

int sum(int x){
    int ret;
    for(int i = x; i > 0; i -= lowbit(i)) ret += tree[i];
    return ret;
}

int main(){
    scanf("%d",&n);
    for(int i = 0; i < n; i ++ ){
        int x, y;
        scanf("%d%d",&x,&y);
        x ++;
        level[sum(x)] ++ ;
        add(x);
    }
    for (int i = 0; i < n; i ++ ) printf("%d\n", level[i]);

    return 0;
}