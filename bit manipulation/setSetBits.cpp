#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,i,j;
    cin>>a>>b>>i>>j;
    int masklength=(1<<(j-i+2))-1;
    int mask=(masklength<<(i-1))&b;
    a=a|mask;
    cout<<a<<endl;
    return 0;
}