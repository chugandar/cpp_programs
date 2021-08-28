#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    reverse(s.begin(),s.end());
    int rev=stoi(s);
    cout<<rev<<endl;
    return 0;
}