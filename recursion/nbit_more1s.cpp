#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int ones,int zeroes,int n,string op){
    if(n==0){
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    op1.push_back('1');
    solve(ones+1,zeroes,n-1,op1);
    if(ones>zeroes){
        string op2 = op;
        op2.push_back('0');
        solve(ones,zeroes+1,n-1,op2);
    }
}
void nbits_more1s(int n){
    solve(0,0,n,"");
}
int main(){
    int n;
    cin>>n;
    nbits_more1s(n);
    return 0;
}