#include <iostream>
using namespace std;

int main(){
    char x;
    cin >> x ;
    if(x >= 'A' and x < 'Z'){
        x += 32;
    }
    cout << x << endl;
    return 0;
}

string hexToDec(string hexStr) {
    stringstream ss;
    ss << hexStr;
    unsigned int hexValue;
    ss >> hex >> hexValue;
    stringstream decSS;
    decSS << dec << hexValue;
    return decSS.str();
}