#include <iostream>
using namespace std;
int main()
{
    double rmb, usd, jpy, gbp;

    cout << "请输入人民币数量：";
    cin >> rmb;

    usd = rmb / 6.2765;
    jpy = rmb / 0.05842;
    gbp = rmb / 8.907;

    cout << "可兑换的美元数量为：" << usd << endl;
    cout << "可兑换的日元数量为：" << jpy << endl;
    cout << "可兑换的英镑数量为：" << gbp << endl;

    return 0;
}
