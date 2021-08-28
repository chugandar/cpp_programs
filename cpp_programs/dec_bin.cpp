#include<iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int> dectobin(int n){
    stack<int> result;
    while(n>1){
        result.push(n%2);
        n=n/2;
    }
    result.push(1);
    return result;

}
int main(){
    int n;
    cin>>n;
    stack<int> bin;
    if(n<=0)
        cout<<"0\n";
    else
        bin = dectobin(n);
    while(!bin.empty()){
        cout<<bin.top();
        bin.pop();
    }
    cout<<endl;
    return 0;
}