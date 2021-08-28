#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mergesort(int a[],int l,int r){
    if(r>l){
        int mid = (l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}
void merge(int a[],int l,int mid,int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    
}
int main(){
    return 0;
}