#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>&,int);
void sort(vector<int> &v){
    if(v.size()==1){
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,val);
}
void insert(vector<int> &v,int val){
    if(v.size()==0 || val >= v[v.size()-1]){
        v.push_back(val);
        return;
    }
    int temp = v[v.size()-1];
    v.pop_back();
    insert(v,val);
    v.push_back(temp);
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}