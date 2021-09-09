#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[1002][1002];
int knapsack_recursive(int wt[],int val[],int w,int n){
    if(n==0||w==0)
        return 0;
    if(wt[n-1]<=w)
        return max(val[n-1] + knapsack_recursive(wt,val,w-wt[n-1],n-1),knapsack_recursive(wt,val,w,n-1));
    else
        return knapsack_recursive(wt,val,w,n-1);
}
int knapsack_memoized(int wt[],int val[],int w,int n){
    if(n==0||w==0)
        return dp[n][w] = 0;
    if(dp[n][w]!=-1)
        return dp[n][w];
    if(wt[n-1]<=w)
        return dp[n][w] = max(val[n-1] + knapsack_recursive(wt,val,w-wt[n-1],n-1),knapsack_recursive(wt,val,w,n-1));
    else
        return dp[n][w] = knapsack_recursive(wt,val,w,n-1);
}
int knapsack_iterative(int wt[],int val[],int w,int n){
    int t[n+1][w+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
            else{
                if(wt[i-1]<=j)
                    t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]],t[i-1][j]);
                else
                    t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][w];
}
int main(){
    memset(dp,-1,1002*1002*sizeof(int));
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int w = 50;
    cout<<knapsack_recursive(wt,val,w,3)<<endl<<knapsack_memoized(wt,val,w,3)<<endl<<knapsack_iterative(wt,val,w,3)<<endl;
    return 0;
}