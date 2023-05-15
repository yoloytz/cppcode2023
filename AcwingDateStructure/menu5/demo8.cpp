#include <bits/stdc++.h>
using namespace std;

const int N = 100010;

int a[N];
int ret[N];
int qian[N], hou[N];

int getret(int i){
    int res = 0;
    for(int j = 1; j <= i; j ++ ){
        res += j;
    }
    return res;
}
//先寻找前面比原数大的数和后面比原数小的数 计算后通过find函数得到结果


int main(){
    int m;
    cin >> m;
    for(int i = 0; i < m; i ++ ) scanf("%d",&a[i]);
    
    for(int i = 0; i < m; i ++ ){
        for(int j = i + 1; j < m; j ++ ){
            if(a[j] < a[i]) hou[i] ++ ;
        }//计算后
        if(i != 0){
            for(int j = i - 1; j >= 0; j -- ){
                if(a[j] > a[i]) qian[i] ++ ;
            }//计算前
        }
        ret[i] = qian[i] + hou[i];      
    }
    for(int i = 0; i < m; i ++ ){
        ret[i] = getret(ret[i]);
    }
    long long result = 0;
    for(int i = 0; i < m; i ++ ){
        result += (long long)ret[i];
    }
    
    cout << result << endl;
    return 0;
        
}