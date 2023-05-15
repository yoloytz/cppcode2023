#include <iostream>
using namespace std;

int main() {
    const int N = 3; // 矩阵的维数
    int matrix[N][N];

    // 输入矩阵
    cout << "请输入" << N << "x" << N << "的矩阵：" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    // 计算两条对角线元素之和
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < N; i++) {
        sum1 += matrix[i][i];
        sum2 += matrix[i][N - i - 1];
    }
    cout << "两条对角线元素之和为：" << sum1 + sum2 << endl;

    // 计算最大值和最小值及其下标
    int max_num = matrix[0][0], min_num = matrix[0][0], max_i = 0, max_j = 0, min_i = 0, min_j = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] > max_num) {
                max_num = matrix[i][j];
                max_i = i;
                max_j = j;
            }
            if (matrix[i][j] < min_num) {
                min_num = matrix[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }
    cout << "最大值为：" << max_num << "，下标为：" << max_i << "," << max_j << endl;
    cout << "最小值为：" << min_num << "，下标为：" << min_i << "," << min_j << endl;
    return 0;
}
