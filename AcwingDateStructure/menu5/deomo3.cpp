#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int a[N];
int i;

int main(){
    int n;
    cin >> n;
    string line;

    getline(cin, line);

    while(n -- ){
        getline(cin, line);
        stringstream ssin(line);
        while(ssin >> a[i]) i ++ ;
    }

    sort(a, a + n);

    int res1, res2;
    for(int j = 1; j < n; j ++ ){
        if(a[j] == a[j - 1]) res1 = a[j]; //重号
        else if(a[j] >= a[j] + 2) res2 = a[j] - 1;
    }

    cout << res2 << " " << res1 << endl;

    return 0;
}