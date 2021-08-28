#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void remove(stack<int> &s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int element = s.top();
    s.pop();
    remove(s,k-1);
    s.push(element);
}
void remmid(stack<int> &s){
    if(s.size() == 0)
        return;
    int mid = s.size()/2 +1;
    remove(s,mid);
}
int main(){
    stack<int> s;
    s.push(0);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);
    remmid(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}