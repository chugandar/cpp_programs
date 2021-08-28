#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,string> numwords;
    numwords.insert(pair<char,string>('0',"Zero"));
    numwords.insert(make_pair('1',"One"));
    numwords['2']="Two";
    numwords['3']="Three";
    numwords.insert(make_pair('4',"Four"));
    numwords.insert(pair<char,string>('5',"Five"));
    numwords['6']="Six";
    numwords['7']="Seven";
    numwords['8']="Eight";
    numwords['9']="Nine";
    int n;
    cin>>n;
    string s = to_string(n);
    for(char c:s){
        cout<<numwords[c];
    }
    cout<<endl;
    return 0;
}