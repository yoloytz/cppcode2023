#include <iostream>
using namespace std;

int main(){
    int x[10] = {6, 10, 210, 14, 38, 42, 70, 22, 30, 0};
    for(int i = 0; i < 10; i ++ ){
        switch(x[i]){
            case 0:
                cout << x[i] << "不能被 3, 5, 7 中任何一个数整除" << endl;
                break;
            case 3:
                cout << x[i] << "能被 3 整除" << endl;
                break;
            case 5:
                cout << x[i] << "能被 5 整除" << endl;
                break;
            case 7:
                cout << x[i] << "能被 7 整除" << endl;
                break;
            case 15:
                cout << x[i] << "能被 3, 5 整除" << endl;
                break;
            case 21:
                cout << x[i] << "能被 3, 7 整除" << endl;
                break;
            case 35:
                cout << x[i] << "能被 5, 7 整除" << endl;
                break;
            case 210:
                cout << x[i] << "数字可以被3 5 7整除" << endl;
                break;
            default:
                cout << x[i] << "不能被 3, 5, 7 中任何一个数整除" << endl;
                break;
        }
    }
}
