#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

typedef pair<int, int> PII;

int t;
int m, n;
const int N = 210;
char g[N][N];
int dist[N][N];

int bfs(PII start, PII end){
    memset(dist, -1, sizeof dist);
    
    queue<PII> que;

    que.push(start);
    dist[start.x][start.y] = 0;
    int dx[4] = {0, 0, 1, -1},dy[4]= {1, -1, 0, 0};
    
    while(que.size()){
        
        auto t = que.front();
        que.pop();
        //如果队列非空 将队列头元素置为t进行操作

        
        //对上下左右进行遍历 
        for(int i = 0; i < 4; i ++ ){
            int x = t.x + dx[i],y = t.y + dy[i];
            if(x < 0 || x >= m || y < 0 || y >= n) continue;
            //越界情况
            if(g[x][y] == '#') continue;
            //墙壁
            if(dist[x][y] != -1) continue;
            //非-1表示已经走过

            dist[x][y] = dist[t.x][t.y] + 1;
            //将单元格置为母格 + 1 
            if(end == make_pair(x, y)) return dist[x][y];
            //如果 终点坐标等于 此时坐标 返回

            que.push({x, y});
        }   
    }
    return -1;
}


int main(){
    cin >> t;
    while(t -- ){
        
        cin >> m >> n;
        for(int i = 0; i < m; i ++ )  scanf("%s",g[i]);
        PII start,end;

        for(int i = 0; i < m; i ++ ){
            for(int j = 0; j < n; j ++ ){
                if(g[i][j] == 'S') start.x = i, start.y = j;
                if(g[i][j] == 'E') end.x = i, end.y = j;
            }
        }

        int res = bfs(start, end);
        
        if(res == -1) printf("无法走到出口！\n");
        else printf("走到出口最近的步数为%d   \n",res);
    }
    return 0;
}