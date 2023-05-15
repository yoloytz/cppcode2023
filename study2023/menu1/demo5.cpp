bool Push(int x) {
    if (IsFull()) return false; // 栈已满，不能入栈
    data[++top] = x; // 栈顶指针加1，将x入栈
    return true;
}

bool Pop(int &x) {
    if (IsEmpty()) return false; // 栈为空，不能出栈
    x = data[top--]; // 将栈顶元素弹出，并将栈顶指针减1
    return true;
}

bool GetTop(int &x) {
    if (IsEmpty()) return false; // 栈为空，无栈顶元素
    x = data[top]; // 获取栈顶元素
    return true;
}

bool IsEmpty() {
    return top == -1; // 栈顶指针为-1，说明栈为空
}

bool IsFull() {
    return top == MAXSIZE - 1; // 栈顶指针为MAXSIZE-1，说明栈已满
}



bool Push(int x) {
    Node *p = new Node(x, top); // 创建新结点，并将其next指向原来的栈顶结点
    top = p; // 将栈顶指针指向新结点
    return true;
}

bool Pop(int &x) {
    if (IsEmpty()) return false; // 栈为空，不能出栈
    Node *p = top; // 保存原来的栈顶指针
    x = p->data; // 获取栈顶元素
    top = p->next; // 将栈顶指针指向下一个结点
    delete p; // 释放原来的栈顶结点
    return true;
}

bool GetTop(int &x) {
    if (IsEmpty()) return false; // 栈为空，无栈顶元素
    x = top->data; // 获取栈顶元素
    return true;
}

bool IsEmpty() {
    return top == NULL; // 栈顶指针为NULL，说明栈为空
}


#include <iostream>
using namespace std;

class LinkStack {
private:
    struct Node {
        int data; // 数据域
        Node *next; // 指针域
        Node(int x = 0, Node *p = NULL) { data = x; next = p; } // 结点构造函数
    };
    Node *top; // 栈顶指针
public:
    LinkStack() { top = NULL; } // 构造函数，初始化栈顶指针
    bool Push(int x); // 入栈操作
    bool Pop(int &x); // 出栈操作
    bool GetTop(int &x); // 获取栈顶元素
    bool IsEmpty(); // 判断栈是否为空
};

bool LinkStack::Push(int x) {
    Node *p = new Node(x, top); // 创建新结点，并将其next指向原来的栈顶结点
    top = p; // 将栈顶指针指向新结点
    return true;
}

bool LinkStack::Pop(int &x) {
    if (IsEmpty()) return false; // 栈为空，不能出栈
    Node *p = top; // 保存原来的栈顶指针
    x = p->data; // 获取栈顶元素
    top = p->next; // 将栈顶指针指向下一个结点
    delete p; // 释放原来的栈顶结点
    return true;
}

bool LinkStack::GetTop(int &x) {
    if (IsEmpty()) return false; // 栈为空，无栈顶元素
    x = top->data; // 获取栈顶元素
    return true;
}

bool LinkStack::IsEmpty() {
    return top == NULL; // 栈顶指针为NULL，说明栈为空
}

int main() {
    LinkStack s;
    int x;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Pop(x);
    s.GetTop(x);
    cout << x << endl; // 输出2
    return 0;
}
