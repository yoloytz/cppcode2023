#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,f2,g1,g2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;
    cin >> e1 >> e2;
    cin >> f1 >> f2;
    cin >> g1 >> g2;
    int ret1 = a1 + a2,ret2 = b1 + b2,ret3 = c1 + c2,ret4 = d1 + d2;
    int ret5 = e1 + e2,ret6 = f1 + f2,ret7 = g1 + g2;
    int ret[7] = {ret1,ret2,ret3,ret4,ret5,ret6,ret7};
    int ans = 0;
    for(int i = 0;i < 7;i++){
        if(ret[i] > 8){
            ans = i + 1;
            break; 
        }
    }
    cout << ans << endl;
    return 0;  
}