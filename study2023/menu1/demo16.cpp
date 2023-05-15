#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "请输入n的值（2<=n<=40）：";
    cin >> n;

    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += i * (i + 1);
    }

    cout << "S = " << sum << endl;

    return 0;
}
