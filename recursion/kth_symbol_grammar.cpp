#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kthsymbol(int n,int k){
    if(n==1){
        return 0;
    }
    int num = pow(2,n-1);
    int mid = num/2;
    if(k<=mid)
        return kthsymbol(n-1,k);
    else
        return !kthsymbol(n-1,k-mid);
}
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    cout<<kthsymbol(n,k)<<endl;
    return 0;
}