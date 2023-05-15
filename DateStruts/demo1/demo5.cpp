#include <bits/stdc++.h>

using namespace std;

int n, a[100010];
unordered_map<int, int> hashtable;

int main(){
    scanf("%d",&n);
    hashtable.clear();
    for(int i = 0; i < n; i ++ ){
        int x;
        scanf("%d",&x);
        ++hashtable[x];
    }
    int x = 0, l = 0;
    for(auto it : hashtable){
        if(it.second > x){
            x = it.second, l = 0;
        }
        if(it.second == x){
            a[l++] = it.first;
        }   
    }
    sort(a, a + l);
    for(int i = 0; i < l; i ++ ){
        printf("%d",a[i]);
    }
    puts("");
    return 0;
}