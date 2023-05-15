#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int nums[N] = {12, 45, 67, 23, 89, 34, 56, 78, 90, 10};
    int max_num = nums[0], min_num = nums[0], max_index = 0, min_index = 0;

    for (int i = 1; i < N; i++) {
        if (nums[i] > max_num) {
            max_num = nums[i];
            max_index = i;
        }
        if (nums[i] < min_num) {
            min_num = nums[i];
            min_index = i;
        }
    }

    cout << "最大数：" << max_num << "，序号：" << max_index << endl;
    cout << "最小数：" << min_num << "，序号：" << min_index << endl;

    return 0;
}
