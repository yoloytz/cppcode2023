#include <bits/stdc++.h>
using namespace std;

const int maxm = 100010;//字典树最大节点数
const int charsize = 26;//26个小写字母为存储基础
int nxt[maxm][charsize];
bool isend[maxn];
int root = 0, cnt = 0;
//字典树的结构创建 nxt的值为树的编号，第一维代表编号，第维度代表存入的字母代表的数据 
//bool值代表这个叶子节点是否存在。

void inser(char s[],int len){
    int now = 0;
    for(int i = 0; i < len; i ++ ){
        int x = s[i] - 'a';
        if(!nxt[now][x]){
            nxt[now][x] == ++cnt;
        }
        now = nxt[now][x];
    }
    isend[now] = 1;
}
//插入函数
