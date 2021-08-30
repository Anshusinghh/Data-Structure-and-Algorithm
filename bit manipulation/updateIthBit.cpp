#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int mask=(n>>i);
    cout<<(mask<<i);
    return 0;
}