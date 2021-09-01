#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    // string s = "Hello";
    // cout<<typeid(s[0]).name();
    // cout<<__builtin_popcount(4)<<endl;
    // cout<<ceil(log2(9))<<endl;
    // int n=10;
    // vector<vector<int>> multi(n);
    // multi[1].push_back(1);
    // cout<<multi[1][0]<<endl;
    string s = "Hello";
    s.erase(s.begin() + s.length()-1);
    cout<<s<<endl;
    return 0;
}