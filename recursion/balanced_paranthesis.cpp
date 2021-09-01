#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int open,int closed,string op){
    if(open==0 && closed==0){
        cout<<op<<endl;
        return;
    }
    if(open!=0){
        string op1 = op;
        op1.push_back('(');
        solve(open-1,closed,op1);
    }
    if(closed>open){
        string op2=op;
        op2.push_back(')');
        solve(open,closed-1,op2);
    }
}
void generate_balanced_paranthesis(int n){
    int open = n;
    int closed = n;
    string op = "";
    solve(open,closed,op);
}
int main(){
    int n;
    cin>>n;
    generate_balanced_paranthesis(n);
    return 0;
}