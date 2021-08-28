#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int a[4][4];
void bfs(vector<vector<int>> a,int start){
    vector<bool> visited(a.size(),false);
    vector<int> q;
    visited[start] = true;
    q.push_back(start);
    int vis;
    while(!q.empty()){
        vis = q[0];
        q.erase(q.begin());
        cout<<vis<<endl;
        for(int i=0;i<a.size();i++){
            if(a[vis][i]==1 && !(visited[i])){
                q.push_back(i);
                visited[i] = true;
            }
        }
    }
}
int main(){
    int n = 4;
    vector<vector<int>> a = {{1,1,1,0,0},{1,1,0,1,1},{1,0,1,0,0},{0,1,0,1,0},{0,1,0,0,1}};
    bfs(a,0);
    return 0;
}