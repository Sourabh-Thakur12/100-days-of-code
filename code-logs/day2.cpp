#include<iostream>
using namespace std;
class stack
{
private:
    int *a;
    int size,top;
public:
    stack(int s);
    ~stack();
    void push(int a);
    void pop();
    void peek();
    bool isfull();
    bool isempty();
    void display();
    void empty();
};

stack::stack(int s)
{
    size = s;
    a = new int[s];
    top = -1;
}

stack::~stack()
{
    delete []a;
}

void stack::push(int item){
    if(isfull()){
        cout<<"stack overflow";
    }
    else
    {
        a[++top]=item;
    }
    
}
bool stack::isfull(){
    if(top == size-1)
    return true;
    else
    return false;
}
bool stack::isempty(){
    if(top == -1)
    return true;
    else
    return false;
}
void stack::display(){
    if(isempty())
    cout<<"stack is empty";
    else{
    for(int i = top; i>=0; i--){
        cout<<a[i]<<" ";
    }
    }
}
void stack::pop(){
    if(isempty()){
        cout<<"stack underflow";
    }
    else{
        int *p = &top;
        top--;
        delete p;
    }
}
int main(){
    stack s1(4);
    s1.push(10);
    s1.push(40);
    s1.push(30);
    s1.push(20);
    s1.pop();
    s1.pop();
    s1.display();
    return 0;
}