#include <iostream>
using namespace std;

void sort(int* nums, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(nums + j) > *(nums + j + 1)) {
                int temp = *(nums + j);
                *(nums + j) = *(nums + j + 1);
                *(nums + j + 1) = temp;
            }
        }
    }
}

int main() {
    const int N = 10;
    int nums[N];

    // 输入10个数
    cout << "请输入10个数：" << endl;
    for (int i = 0; i < N; i++) {
        cin >> *(nums + i);
    }

    // 对10个数进行排序
    sort(nums, N);

    // 输出排序后的结果
    cout << "排序后的结果为：" << endl;
    for (int i = 0; i < N; i++) {
        cout << *(nums + i) << " ";
    }
    cout << endl;

    return 0;
}
