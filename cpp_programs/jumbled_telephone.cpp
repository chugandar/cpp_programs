#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void print_map(unordered_map<char,int> frequency){
    for(auto it:frequency){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int check_empty(unordered_map<char,int> frequency){
    for(auto it:frequency){
        if(it.second>0)
            return 0;
    }
    return 1;
}
int main(){
    string s;
    cin>>s;
    int n = s.length();
    unordered_map<char,int> frequency;
    unordered_map<char,int> frequency1;
    //transform(s.begin(),s.end(),s.begin(),[](unsigned char c) -> unsigned char{return toupper(c);});
    transform(s.begin(),s.end(),s.begin(),::toupper);
    for(int i=0;i<n;i++){
        if(frequency.find(s[i])==frequency.end())
            frequency[s[i]]=1;
        else
            frequency[s[i]]++;
        //cout<<frequency[s[i]]<<endl;
    }
    frequency1=frequency;
    //print_map(frequency1);
    //cout<<frequency1;
    string final="";
    int flag;
    vector<string> numbers{"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    L:for(int i=numbers.size()-1;i>=0;i--){
        flag=0;
        string temp=to_string(i);
        for(int j=0;j<numbers[i].length();j++){
            char num = numbers[i][j];
            //cout<<num<<endl;
            if(frequency1.find(num)==frequency1.end()){
                flag=1;
                //cout<<"Not found"<<endl;
                //exit(0);
                break;
            }
            else{
                if(frequency1[num]==0){
                    //frequency1.erase(num);
                    //print_map(frequency1);
                    flag=1;
                    break;
                }
                frequency1[num]--;
            }
        }
        if(flag){
            frequency1 = frequency;
            //print_map(frequency1);
            //exit(0);
        }
        else{
            frequency=frequency1;
            final+=temp;
            //cout<<final<<endl;
        }
    }
    if(!check_empty(frequency)) goto L;
    sort(final.begin(),final.end(),greater<char>());
    cout<<final<<endl;
    return 0;
}