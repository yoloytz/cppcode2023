#include <bits/stdc++.h>
#include "cengxu.h"
using namespace std;

int main(){
    TreeNode* NodeE = new TreeNode('E');
    TreeNode* NodeF = new TreeNode('F');
    TreeNode* NodeG = new TreeNode('G');
    TreeNode* NodeD = new TreeNode('D');
    NodeD->right = NodeG;
    TreeNode* NodeC = new TreeNode('C',NodeE,NodeF);
    TreeNode* NodeB = new TreeNode('B',NodeD);
    TreeNode* rootA = new TreeNode('A',NodeB,NodeC);
    //二叉树的创建
    char x[] = "A(B(D(,G)),C(E,F))";
    // TreeNode* rootA = nullptr;
    // creatTree(rootA, x);

    cout << "二叉树的创建over" << endl;

    vector<char> ret1 = cengxu(rootA);
    cout << "层序遍历" << endl;
    for (int i = 0; i < ret1.size(); i ++) cout << ret1[i] << ' ';
    puts("");
    //层序遍历
    
    vector<char> ret2;
    preorder(rootA, ret2);
    cout << "先序遍历" << endl;
    for (int i = 0; i < ret2.size(); i ++) cout << ret2[i] << ' ';
    puts("");
    //先序遍历

    vector<char> ret3;
    inorder(rootA, ret3);
    cout << "中序遍历" << endl;
    for (int i = 0; i < ret3.size(); i ++) cout << ret3[i] << ' ';
    puts("");
    //中序遍历

    vector<char> ret4;
    postorder(rootA, ret4);
    cout << "后序遍历" << endl;
    for (int i = 0; i < ret4.size(); i ++) cout << ret4[i] << ' ';
    puts("");
    //后序遍历

    int n = getMaxdepth(rootA);
    cout << "这颗书的高度为 : " << n << endl;   
    //求深度

    int num = getNodenum(rootA);
    cout << "叶子节点的个数为 : " << num << endl;
    //求叶子节点个数
    
    return 0;
}