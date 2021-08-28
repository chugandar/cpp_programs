#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp){
    if(s.empty() || temp>=s.top()){
        s.push(temp);
        return;
    }
    int element = s.top();
    s.pop();
    insert(s,temp);
    s.push(element);
}
void sort(stack<int> &s){
    if(s.size()==1)
        return;
    int element = s.top();
    s.pop();
    sort(s);
    insert(s,element);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(0);
    s.push(5);
    s.push(2);
    sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}