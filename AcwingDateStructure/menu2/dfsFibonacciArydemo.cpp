#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int q[10010];
    q[0] = 0, q[1] = 1;
    for(int i = 2; i < n; i++){
        q[i] = q[i - 1] + q[i - 2];
    }
    
    for(int i = 0; i < n; i++) printf("%d ",q[i]);

    return 0;
}