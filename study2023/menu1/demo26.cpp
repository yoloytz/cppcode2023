#include <iostream>
using namespace std;

class Student {
private:
    int id;
    int score;
public:
    Student(int id, int score) {
        this->id = id;
        this->score = score;
    }
    int getId() {
        return id;
    }
    int getScore() {
        return score;
    }
};

int max(Student* students, int n) {
    int max_score = students[0].getScore();
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].getScore() > max_score) {
            max_score = students[i].getScore();
            max_index = i;
        }
    }
    return students[max_index].getId();
}

int main() {
    const int N = 10;
    Student students[N] = {Student(1, 80), Student(2, 90), Student(3, 85), Student(4, 92), Student(5, 88),
                           Student(6, 76), Student(7, 95), Student(8, 87), Student(9, 82), Student(10, 91)};

    // 查找成绩最高的学生的学号
    int max_id = max(students, N);

    // 输出结果
    cout << "成绩最高的学生的学号为：" << max_id << endl;

    return 0;
}
