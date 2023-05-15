#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int q[N];

int quick_searchEx(int q[], int l, int r, int k){
    if( l >= r ) return q[l];
    
    int i = l - 1, j = r + 1, x = q[l];

    while(i < j){
        while( q[ ++ i] < x);
        while( q[ -- j] > x);
        if ( i < j) swap(q[i],q[j]);
    } 

    int Sl = j - l + 1;
    if( k < Sl) return quick_searchEx(q, l, j, k);
    else return quick_searchEx(q, j + 1, r, k - Sl);
}

int main(){
    int n,k;
    cin >> n >> k;
    k--;

    for(int i = 0; i < n; i ++) scanf("%d",&q[i]);
    
    
    cout << "排序后第" << k + 1 << "个数字为" << quick_searchEx(q, 0, n - 1, k) << endl;

    return 0;
}