#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &arr){
    int min;
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }
}
int main(){
    vector<int> v{2,1,3,5,4};
    selection_sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}