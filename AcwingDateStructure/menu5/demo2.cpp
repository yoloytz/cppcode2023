//前缀和问题记得将数据加1 避免出现0 避免1边界问题
//递增三元组

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int N = 1e5 + 10;
int A[N], B[N], C[N];
int cnt[N], s[N];
int as[N],cs[N];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++ ) cin >> A[i], A[i] ++ ;
    for(int i = 0; i < n; i ++ ) cin >> B[i], B[i] ++ ;
    for(int i = 0; i < n; i ++ ) cin >> C[i], C[i] ++ ;
    
    for(int i = 0; i < n; i ++ ) cnt[A[i]] ++;
    for(int i = 0; i < N; i ++ ) s[i] = s[i - 1] + cnt[i];
    for(int i = 0; i < n; i ++ ) as[i] = s[B[i] - 1];

    memset(cnt, 0, sizeof cnt);
    memset(s, 0, sizeof s);
    for(int i = 0; i < n; i ++ ) cnt[C[i]] ++;
    for(int i = 0; i < N i ++ ) s[i] = s[i - 1] + cnt[i];
    for(int i = 0; i < n; i ++ ) cs[i] = s[N - 1] - s[B[i]];

    //枚举结果
    LL ret = 0;
    for(int i = 0; i < n; i ++ ) ret += (LL) as[i] * cs[i];

    cout << ret << endl;
    
    return 0;

    
}