#include <bits/stdc++.h>
using namespace std;

int sq3(int x){
    return x*x*x;
}

long int sq3(long int x){
    return x*x*x;
}

double sq3(double x){
    return x*x*x;
}

int main(){
    int x01 = 3;
    long int x02 = 789456;
    double x03 = 3.14;
    int x1 = sq3(x01); 
    long int x2 = sq3(x02); 
    double x3 = sq3(x03); 
    cout << x1 << "   " << x2 << "   " << x3 << endl;
    return 0;
}


