#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag=0;
    int sq = (int)sqrt(n);
    for(int i=2;i<sq;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(n==0 || n==1)
        cout<<"Not a prime"<<endl;
    else if(n==2)
        cout<<"Prime"<<endl;
    else if(flag)
        cout<<"Not a prime"<<endl;
    else
        cout<<"Prime"<<endl;
    return 0;
}