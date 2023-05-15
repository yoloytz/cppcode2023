/*
分巧克力问题 ，能用数组解决尽量用数组解决。。
*/


#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;

int n, k;
int h[N], w[N];

bool check(int mid)
{
    int res = 0;
    for (int i = 0; i < n; i ++ )
    {
        res += (h[i] / mid) * (w[i] / mid);
        if (res >= k) return true;
    }

    return false;
}

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i ++ ) scanf("%d%d", &h[i], &w[i]);

    int l = 1, r = 1e5;
    while (l < r)
    {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }

    printf("%d\n", r);

    return 0;
}

