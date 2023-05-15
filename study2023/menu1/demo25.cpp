#include <iostream>
using namespace std;

void countChar(char* str, int& total, int& upper, int& lower, int& digit, int& other) {
    total = 0;
    upper = 0;
    lower = 0;
    digit = 0;
    other = 0;
    while (*str != '\0') {
        total++;
        if (*str >= 'A' && *str <= 'Z') {
            upper++;
        } else if (*str >= 'a' && *str <= 'z') {
            lower++;
        } else if (*str >= '0' && *str <= '9') {
            digit++;
        } else {
            other++;
        }
        str++;
    }
}

int main() {
    const int N = 201;
    char str[N];

    // 输入字符串
    cout << "请输入一个最多200个字符的字符串：" << endl;
    cin.getline(str, N);

    // 统计字符个数
    int total, upper, lower, digit, other;
    countChar(str, total, upper, lower, digit, other);

    // 输出结果
    cout << "字符总个数为：" << total << endl;
    cout << "大写字母个数为：" << upper << endl;
    cout << "小写字母个数为：" << lower << endl;
    cout << "数字个数为：" << digit << endl;
    cout << "其他字符个数为：" << other << endl;

    return 0;
}
