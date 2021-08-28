#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    //string to char array
    string s="Hello";
    int n = s.length();
    char c[n+1];
    strcpy(c,s.c_str());
    int size = sizeof(c)/sizeof(char);
    for(int i=0;i<size;i++){
        cout<<c[i]<<"\t";
    }
    cout<<endl;
    string s1 = "10";
    n = stoi(s1);
    cout<<n<<endl;
    char c1 = '1';
    n = c1 - '0';
    cout<<n<<endl;
    c1 = n + '0';
    cout<<c1<<endl;
    return 0;
}