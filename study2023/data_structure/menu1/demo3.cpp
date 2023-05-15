#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a(10,1);
    cout << a[2] << endl;
    int size = a.size();
    cout << "向量的长度 : " << size << endl;
    if(a.empty()){
        cout << "向量为空" << endl;
    }
    a.clear();
    if(a.empty()){
        cout << "向量第二次为空" << endl;
    }

    stack<int> s1;
    s1.push(1);
    s1.push(1);
    s1.push(1);
    s1.push(1);
    s1.push(1);
    s1.pop();
    s1.push(2);
    int ret = s1.top();
    cout << "目前的栈顶元素为 : " << ret << endl;
    int size2 = s1.size();
    cout << "目前栈的长度为 : " << size2 << endl;
    
    deque<int> s2;
    s2.push_back(3);
    s2.push_back(4);
    s2.pop_front();
    s2.push_back(6);
    cout << "现在队列头的值为 : " << s2.front() << endl;
    cout << "现在队列尾的值为 : " << s2.back() << endl;
    s2.push_front(100);
    cout << "现在队列头的值为 : " << s2.front() << endl;
    return 0;
}