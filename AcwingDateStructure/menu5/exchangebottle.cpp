#include <bits/stdc++.h>

using namespace std;

const int N = 10010;

int m;
int b[N];
bool st[N];

int main(){
    cin >> m;
    for(int i = 1; i <= m; i ++ ) scanf("%d",&b[i]);

    int cnt = 0;
    for(int i = 1; i <= m; i ++ ){
        if(!st[i]){
            cnt ++ ;
            for(int j = i; !st[j]; j = b[j]){
                st[j] = true;
            }
        }

        
    }
    printf("%d",m - cnt);

    return 0;
}