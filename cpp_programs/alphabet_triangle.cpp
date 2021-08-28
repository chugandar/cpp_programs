#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch = 'A';
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i+1;j--)
            cout<<" ";
        for(int j=0;j<=i;j++)
            cout<<char(ch+j);
        for(int j=i-1;j>=0;j--)
            cout<<char(ch+j);
        cout<<endl;
    }
    return 0;
}