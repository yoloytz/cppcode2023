#include <bits/stdc++.h>
using namespace std;
//筛质数
const int N = 100010;
int m,n;

int prime[N],cnt;
bool st[N];

int get_prime(int n){
    for(int i = 2; i <= n; i ++ ){
        if(!st[i]) prime[cnt ++ ] = i;
        for(int j = 0; prime[j] * i <=n; j ++){
            st[prime[j] * i] = true;
            if(j % prime[j] == 0) break;
        }
    }
}
int main(){
    cout << "输入一个数据" << endl;
    int n;
    cin >> n;
    get_prime(n);
    
    return 0;
}