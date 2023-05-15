#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int id;
    string name;
    string gender;
    int age;
    string major;
    string phone;

public:
    // 构造函数
    Student(int id, string name, string gender, int age, string major, string phone) {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->age = age;
        this->major = major;
        this->phone = phone;
    }

    // 设置各个数据成员的值
    void setId(int id) {
        this->id = id;
    }
    void setName(string name) {
        this->name = name;
    }
    void setGender(string gender) {
        this->gender = gender;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setMajor(string major) {
        this->major = major;
    }
    void setPhone(string phone) {
        this->phone = phone;
    }

    // 获取各个数据成员的值
    int getId() {
        return id;
    }
    string getName() {
        return name;
    }
    string getGender() {
        return gender;
    }
    int getAge() {
        return age;
    }
    string getMajor() {
        return major;
    }
    string getPhone() {
        return phone;
    }

    // 输出全部个人信息
    void display() {
        cout << "学号：" << id << endl;
        cout << "姓名：" << name << endl;
        cout << "性别：" << gender << endl;
        cout << "年龄：" << age << endl;
        cout << "专业：" << major << endl;
        cout << "手机号：" << phone << endl;
    }
};

int main() {
    Student s(20180001, "陈小胜", "男", 18, "计算机", "16100011234");
    s.display();
    return 0;
}
