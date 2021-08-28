#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
class Stack{
    private:
    int top;
    int st[MAX];
    public:
    Stack(){
        top = -1;
    }
    void push(int x){
        if(top>MAX-1)
            cout<<"Stack Overflow\n";
        else{
            st[++top] = x;
            cout<<"Pushed "<<x<<" into stack\n";
        }
    }
    int pop(){
        if(top==-1)
            cout<<"Stack Underflow\n";
        else{
            int x = st[top--];
            cout<<"Element "<<x<<" poped"<<endl;
            return x;
        }
        return -1;
    }
    int peek(){
        if(top==-1)
            return -1;
        return st[top];
    }
    bool isEmpty(){
        if(top==-1)
            return true;
        return false;
    }
    void printStack(){
        int counter = top;
        if(top ==-1)
            cout<<"No elements in stack\n";
        else{
            cout<<"Contents of stack are:\n";
            while(counter!=-1){
                cout<<st[counter--]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main(){
    Stack stack;
    int ch;
    while(1){
        cout<<"Choose from the below operations:\n1. Push\n2. Pop\n3. Peek\n4. Stack contents\nEnter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                int x;
                cout<<"Enter element to be inserted: ";
                cin>>x;
                stack.push(x);
                break;
            case 2:
                int y;
                y= stack.pop();
                break;
            case 3:
                int z;
                z = stack.peek();
                cout<<"The top of the stack is "<<z<<endl;
                break;
            case 4:
                stack.printStack();
                break;
            default:
                exit(0);
        }
    }
    return 0;
}