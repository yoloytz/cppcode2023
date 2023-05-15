#include <bits/stdc++.h>
using namespace std;

const int N = 100010;

int n;
int q[N],tr[N];

int lowbit(int x){
    return x & -x;
}

void add(int x, int v){
    for(int i = x;x <= n; x += lowbit(i)) tr[i] += v;
}

int query(int x){
    int ret;
    for(int i = x;i ; i -= lowbit(i)){
        ret += tr[i];
    }
    return ret;
}

int main(){
    
}