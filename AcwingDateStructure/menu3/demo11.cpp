#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

typedef long long LL;

int n, k;
LL s[N], cnt[N];

int main(){
    scanf("%d %d",&n, &k);
    for(int i = 1; i <=n; i ++ ){
        scanf("%lld", &s[i]);
        s[i] += s[i - 1];
    }

    LL ret = 0;
    cnt[0] = 1;
    for(int i = 1; i <= n; i ++ ){
        ret += cnt[s[i] % k];
        cnt[s[i] % k] ++ ;
    }
    
    printf("%lld", ret);
    
    return 0;

}