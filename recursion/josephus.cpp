#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void josephus(int k,int index,vector<int> &arr){
    if(arr.size()==1){
        cout<<arr[0]<<endl;
        return;
    }
    int n = arr.size();
    index = (index+k)%n;
    arr.erase(arr.begin()+index);
    josephus(k,index,arr);
}
int main(){
    int k;
    vector<int> arr;
    for(int i=1;i<=40;i++){
        arr.push_back(i);
    }
    //n = arr.size();
    k=7;
    josephus(k-1,0,arr);
    return 0;
}