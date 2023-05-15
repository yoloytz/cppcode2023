#include <bits/stdc++.h>
using namespace std;

const int N = 10010;
int q[N], front = 1, rear = 0;
char str[1000];
int n;

//手写度队列和对stl队列的应用
//push pop query

int main(){
    scanf("%d",&n);
    for(int i = 0; i < n; i ++ ){

        scanf("%s",&str);
        if(str[2] == 's'){
            int x;
            scanf("%d",&x);
            q[++rear] = x;
        }else{
            if(str[0] == 'p'){
                ++ front;
            }
            if(str[0] == 'q'){
                int x;
                scanf("%d",&x);
                printf("%d",q[front + x - 1]);
            }
        }
    }

    queue<int> s;
    s.push(2);
    printf("%d",s.front());

    return 0;
}