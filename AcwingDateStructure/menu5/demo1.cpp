#include <bits/stdc++.h>

using namespace std;

const int N = 10010;
int NumMax = 1e8 + 10;

int a[N];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++ ){
        cin >> a[i];
    }

    int ret = 0;
    for(int i = 0; i < n; i ++){
        int maxv = -NumMax, minv = NumMax;
        for(int j = i; j < n; j ++ ){
            maxv = max(maxv, a[j]);
            minv = min(minv, a[j]);
            if((maxv - minv) == j - i)  ret ++;
        }
    }

    cout << ret << endl;

    return 0;
}