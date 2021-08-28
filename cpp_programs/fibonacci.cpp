#include<iostream>
using namespace std;
static int fibo[100];
int fib(int n){
    if(n==0){
        //fibo[0]=0;
        return 0;
    }
    if(n==1){
        //fibo[1]=0;
        return fibo[1];
    }
    if(n==2){
        //fibo[2]=1;
        return fibo[2];
    }
    if(n==3){
        fibo[3]=fibo[1]+fibo[2];
        //cout<<fibo[3]<<endl;
        return fibo[3];
    }
    if(fibo[n-1]>0 && fibo[n-2]>0){
        fibo[n] = fibo[n-1]+fibo[n-2];
        return fibo[n];
    }
    fibo[n-1] = fib(n-1);
    fibo[n-2] = fib(n-2);
    fibo[n] = fibo[n-1]+fibo[n-2];
    return fibo[n];
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    fibo[0]=fibo[1]=0;
    fibo[2]=1;
    cout<<fib(n)<<endl;
    return 0;
}