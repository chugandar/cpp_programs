#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subsets(string ip,string op){
    if(ip.length()==0){
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    string op2 = op + ip[0];
    ip.erase(ip.begin());
    subsets(ip,op1);
    subsets(ip,op2);
}
int main(){
    string s;
    cin>>s;
    subsets(s,"");
    return 0;
}