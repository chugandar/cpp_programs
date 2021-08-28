#include<iostream>
using namespace std;
void swap(int* a,int* b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main(){
    int n,m;
    cin>>n>>m;
    swap(&n,&m);
    cout<<n<<" "<<m<<endl;
    return 0;
}