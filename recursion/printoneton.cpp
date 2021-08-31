#include<iostream>
using namespace std;
int i=0;
int oneton(int n){
    if(i==(n-1))return n;
    i++;
    cout<<i<<" ";
    oneton(n);
}
int main(){
    int n;
    cin>>n;
    cout<<oneton(n);
    return 0;
}