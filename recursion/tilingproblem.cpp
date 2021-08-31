#include<iostream>
using namespace std;
int tileways(int n,int m){
    if(n==m)return 2;
    if(n<m)return 1;
    if(m<n)return tileways(n-1,m)+tileways(n-m,m);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<tileways(n,m);
    return 0;
}