
/*
机器人跳跃问题
通过学习理解计算机解决问题的循环思维
学会通过 不同的算法解决问题
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int n;
int h[N];


bool check(int e){
    for(int i = 0; i < n; i ++ ){
        e = e*2 - h[i];
        if(e < 0) return false;
        if(e > 1e5) return true;
    }
    return true;
}

int main(){
    scanf("%d",&n);
    for(int i = 0; i < n; i++) scanf("%d",&h[i]);
    
    int l = 0, r = 1e5;
    while(l < r){
        int mid = l + r >> 1;
        if(check(mid)) r = mid;
        else l = mid + 1;
    }
    
    printf("%d\n",r);
    
    return 0;
}