#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void toh(int n,int s,int d,int h){
    if(n==1){
        cout<<"Move disc "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    toh(n-1,s,h,d);
    cout<<"Move disc "<<n<<" from "<<s<<" to "<<d<<endl;
    toh(n-1,h,d,s);
}
int main(){
    int n;
    cin>>n;
    int s=1,d=2,h=3;
    toh(n,s,d,h);
    return 0;
}