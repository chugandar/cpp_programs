#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    int len = s.size();
    int j=len-1;
    int flag=0;
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[j]){
            flag=1;
            break;
        }
        j--;
    }
    if(flag)
        cout<<"Not a palindrome"<<endl;
    else
        cout<<"Palindrome"<<endl;
    return 0;
}