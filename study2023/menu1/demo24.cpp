#include <iostream>
using namespace std;

void findMaxMin(int* nums, int n, int& max_num, int& max_index, int& min_num, int& min_index) {
    max_num = *nums;
    min_num = *nums;
    max_index = 0;
    min_index = 0;
    for (int i = 1; i < n; i++) {
        if (*(nums + i) > max_num) {
            max_num = *(nums + i);
            max_index = i;
        }
        if (*(nums + i) < min_num) {
            min_num = *(nums + i);
            min_index = i;
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

    // 查找最大值和最小值及其序号
    int max_num, max_index, min_num, min_index;
    findMaxMin(nums, N, max_num, max_index, min_num, min_index);

    // 输出结果
    cout << "最大值为：" << max_num << "，序号为：" << max_index << endl;
    cout << "最小值为：" << min_num << "，序号为：" << min_index << endl;

    return 0;
}
