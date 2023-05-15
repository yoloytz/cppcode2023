#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int a[N],s[N];

int main(){
    int n,k;
    cin >> n >> k;
    for(int i = 1; i <= n; i ++ ) scanf("%d",&a[i]);
    s[1] = a[1];
    s[0] = a[0] = 0;
    for(int i = 2; i <= n; i ++ ) s[i] = a[i] + s[i-1];
    //准备好了前缀和数组
    int ret = 0, target = 0;
    for(int i = 1; i <= n; i ++ ){
        for(int j = i;j <= n; j ++ ){
            target = s[j] - s[j-i];
            if(target > 1 && (target%k) == 0) ret ++ ;
        }
    }
    cout << ret << endl;
    return 0;
}