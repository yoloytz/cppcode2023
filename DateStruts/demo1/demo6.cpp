#include <bits/stdc++.h>

using namespace std;

priority_queue<int, vector<int>, greater<int>> q;
int n;

int main(){
    scanf("%d",&n);
    for(int i = 0; i < n; i ++ ){
        int x;
        scanf("%d",&x);
        q.push(x);
    }
    for(int i = 0; i < n; i ++ ){
        printf("%d",q.top());
        q.pop();
    }
    return 0;
}
