#include <bits/stdc++.h>
using namespace std;

int n;

inline void preorder(int t){
    printf("%d",t);
    if(t + t <= n)  preorder(t + t);
    if(t + t + 1 <= n)  preorder(t + t + 1);
}

inline void inorder(int t){
    if(t + t <= n)  preorder(t + t);
    printf("%d",t);
    if(t + t + 1 <= n)  preorder(t + t + 1);
}

inline void postorder(int t){
    if(t + t <= n)  preorder(t + t);
    if(t + t + 1 <= n)  preorder(t + t + 1);
    printf("%d",t);
}


int main(){
    scanf("%d",&n);
    preorder(1);
    printf("\n");
    inorder(1);
    printf("\n");
    postorder(1);
    return 0;
    //二叉树的先序 中序 后续遍历
}