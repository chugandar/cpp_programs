#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permutations(string ip,string op){
    if(ip.length()==0){
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    char space = ' ';
    op1.push_back(space);
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    permutations(ip,op1);
    permutations(ip,op2);
}
int main(){
    string s;
    cin>>s;
    string op;
    op+=s[0];
    s.erase(s.begin());
    //cout<<op<<endl;
    permutations(s,op);
    return 0;
}