#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int q[N];
int n,k;

int main(){
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++ ) scanf("%d", &q[i]);
    
    for(int i = 0; i < k; i ++){
        int aim;
        scanf("%d",&aim);
        int l = 0, r = n - 1;

        while(l < r){
            int mid = (l + r) >> 1;
            if(q[mid] >= aim) r = mid;
            else l = mid + 1;
        }
        if(q[r] == aim){
            cout << r << " ";

            r = n - 1;
            while(l < r){
                int mid = (r + l + 1) >> 1;
                if(q[mid] <= aim) l = mid;
                else r = mid - 1;
            }
            cout << r << endl;
        }else{
            cout << "-1 -1" << endl;
        }

    }
    return 0;
}