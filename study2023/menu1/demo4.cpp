#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int reg_num;
    string name;
    double math_score;
    double english_score;
    double computer_score;
public:
    void set_stu_inf(int r, string n, double m, double e, double c) {
        reg_num = r;
        name = n;
        math_score = m;
        english_score = e;
        computer_score = c;
    }
    double sum() {
        return math_score + english_score + computer_score;
    }
    double average() {
        return sum() / 3.0;
    }
    void print() {
        cout << "学号：" << reg_num << endl;
        cout << "姓名：" << name << endl;
        cout << "数学成绩：" << math_score << endl;
        cout << "英语成绩：" << english_score << endl;
        cout << "计算机成绩：" << computer_score << endl;
    }
    int get_reg_num() {
        return reg_num;
    }
};

int main() {
    srand(time(NULL));
    Student stu[3];
    for (int i = 0; i < 3; i++) {
        int reg_num = rand() % 10000 + 10000;
        string name = "学生" + to_string(i+1);
        double math_score = rand() % 51 + 50;
        double english_score = rand() % 51 + 50;
        double computer_score = rand() % 51 + 50;
        stu[i].set_stu_inf(reg_num, name, math_score, english_score, computer_score);
        cout << "学生" << i+1 << "的总成绩为：" << stu[i].sum() << endl;
        cout << "学生" << i+1 << "的平均成绩为：" << stu[i].average() << endl;
    }
    double max_score = 0;
    double sum_score = 0;
    for (int i = 0; i < 3; i++) {
        if (stu[i].sum() > max_score) {
            max_score = stu[i].sum();
        }
        sum_score += stu[i].sum();
    }
    double avg_score = sum_score / 9.0;
    cout << "这个班的最高分为：" << max_score << endl;
    cout << "全班平均分为：" << avg_score << endl;
    int search_reg_num;
    cout << "请输入要查询的学生的学号：";
    cin >> search_reg_num;
    for (int i = 0; i < 3; i++) {
        if (stu[i].get_reg_num() == search_reg_num) {
            stu[i].print();
            break;
        }
    }
    return 0;
}
