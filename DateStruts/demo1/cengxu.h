#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    char val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(char x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(char x, TreeNode *left) : val(x), left(left), right(nullptr) {}
    TreeNode(char x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


void creatTree(TreeNode* head,char str[]){
    stack<TreeNode*> makeTree;
    char ch;
    TreeNode* newNode;
    TreeNode* Node;
    int k = 0, j = 0;
    //k = 1左节点  k = 2 右节点

    while((ch = str[j ++ ]) != '\0'){
        switch (ch)
        {
        case '(':
            makeTree.push(newNode);
            k = 1;
            break;
        case ',':
            k = 2;
            break;
        case ')':
            makeTree.pop();
            break;
        default:
            newNode = new TreeNode(ch, nullptr, nullptr);
            if(head == nullptr){
                head = newNode;
            }else{
                switch (k)
                {
                case 1:
                    Node = makeTree.top();
                    Node->left = newNode;
                    break;
                case 2:
                    Node = makeTree.top();
                    Node->right = newNode;
                    break;
                }
            }
        }
    }
}


vector<char> cengxu(TreeNode* root){
    queue<TreeNode*> que;
    vector<char> ret;

    que.push(root);

    while(!que.empty()){
        TreeNode* newNode = que.front();
        que.pop();
        ret.push_back(newNode->val);
        if(newNode->left != nullptr) que.push(newNode->left);
        if(newNode->right != nullptr) que.push(newNode->right);
        }
    return ret;
}

void preorder(TreeNode* root,vector<char>& ret){
    if(root == nullptr) return;
    TreeNode* newNode = root;
    ret.push_back(root->val);
    preorder(newNode->left,ret);
    preorder(newNode->right,ret);
}

void inorder(TreeNode* root,vector<char>& ret){
    if(root == nullptr) return;
    TreeNode* newNode = root;
    
    inorder(newNode->left,ret);
    ret.push_back(root->val);
    inorder(newNode->right,ret);
}

void postorder(TreeNode* root,vector<char>& ret){
    if(root == nullptr) return;
    TreeNode* newNode = root;
    
    postorder(newNode->left,ret);
    postorder(newNode->right,ret);
    ret.push_back(root->val);
}

int getMaxdepth(TreeNode* root){
    if(root == nullptr) return 0;
    TreeNode* newNode = root;
    int leftdeepth = getMaxdepth(newNode->left);
    int rightdeepth = getMaxdepth(newNode->right);
    int depth = max(leftdeepth, rightdeepth) + 1;
    return depth;
}

int getNodenum(TreeNode* root){
    static int num = 0;

    if(root != nullptr){
        TreeNode* newNode = root;
        if(root->left == nullptr && root->right == nullptr) num ++ ;
        getNodenum(newNode->left);
        getNodenum(newNode->right); 
    }
    return num;
}


