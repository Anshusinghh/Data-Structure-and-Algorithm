#include<iostream>
using namespace std;
int power(int n,int pow){
    if(pow==0)return 1;
    return n*power(n,pow-1);
}
int poweropt(int n,int pow){
    if(pow==0)return 1;
    int shortpow=poweropt(n,pow/2);
    int shortpowsr=shortpow*shortpow;
    if(n&1)return n*shortpowsr;
    return shortpowsr;
}
int main(){
    int n,pow;
    cin>>n>>pow;
    cout<<power(n,pow)<<endl;
    cout<<poweropt(n,pow)<<endl;
    return 0;
}