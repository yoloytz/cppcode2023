//main:
#include <iostream>
#include "func.h"
using namespace std;

int main(){
    exp1 L;
    char a[] = {'1','2','3','1','1','0','4','2','3','1','0','4','2'};

    creatL(&L, a);
    cout << "修改前:" << endl;
    printEx(&L,0);
    int n = del(&L);

    cout << "\n修改后:" << endl;
    printEx(&L, n);
    return 0;
}

//func