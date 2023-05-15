#include <bits/stdc++.h>
using namespace std;

const int N = 100010;

#define x first
#define y second

typedef pair<int, int> PII

int n, d, l;
int cnt[N];
PII logs[N];
bool st[N];

int main(){
    cin >> n >> d >> k;
    for(int i = 0; i < n; i ++ ) scanf("%d%d",&logs[i].x,&logs[i].y);
    sort(logs, logs + n);
    for(int i = 0, j = 0; i < n; i ++ ){
        int id = logs[i].y;
        cnt[id] ++ ;
        while(logs[i].x - logs[j].x >= d){
            cnt[logs[j].y] -- ;
            j ++ ;
        }
        if(cnt[id >= k]) st[id] = true;
    }
    for (int i = 0; i <= 100000; i ++ )
        if (st[i])
            printf("%d\n", i);

    return 0;
}