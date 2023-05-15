#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double a, b, c, area;
public:
    Triangle(double a = 1, double b = 1, double c = 1) {
        if (a + b > c && a + c > b && b + c > a) {
            this->a = a;
            this->b = b;
            this->c = c;
        } else {
            throw "Invalid triangle sides";
        }
        
        // 计算面积
        double s = (a + b + c) / 2;
        this->area = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    
    string get_type() {
        if (a == b && b == c) {
            return "等边三角形";
        } else if (a == b || a == c || b == c) {
            return "等腰三角形";
        } else {
            return "一般三角形";
        }
    }
    
    void print_area() {
        cout << "面积为：" << area << endl;
    }
};

int main() {
    
    Triangle t1(3, 4, 5);
    cout << t1.get_type() << endl;
    t1.print_area();
    
    Triangle t2(2, 2, 3);
    cout << t2.get_type() << endl;
    t2.print_area();
    
    Triangle t3(1, 2, 3);
    cout << t3.get_type() << endl;
    t3.print_area();
    
    return 0;
}
