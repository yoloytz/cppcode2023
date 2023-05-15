#include <iostream>
using namespace std;
int main(){
    char x;
    cin >> x;
    for(int i = 0; i < 3 ;i ++){
        cout << "  " << x << "  " << endl;
        cout << " " << x << x << x << " " << endl;
        cout << x << x << x << x << x << endl;
        return 0;  
    }
}