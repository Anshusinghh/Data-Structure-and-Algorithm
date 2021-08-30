//power of integers can be very large compared to storage of datatypes
//For that reason modulo exponentiation is important 
//To proceed further, one need to have understanding is of the modulo arithmatic:-

//          (a*b)%mod=((a%mod)*(b%mod))%mod

//Now the logic here is:-

//if odd

//      (a^n)%mod=((a%mod)*((a^(n-1))%mod))%mod

//if even

//      (a^n)%mod=(((a^(n/2))%mod)*((a^(n/2))%mod))%mod

//if 0 return 1

//We will achieve this using recursion


#include<iostream>
using namespace std;
int Mod(int &x,int n,int &m){
    int y;
    if(n==0)return 1;
    else if(n&1)return ((x%m)*Mod(x,--n,m))%m;
    else{
        y=Mod(x,n/2,m);
        return (y*y)%m;
    }
}
int main(){
    int x,n,m;
    cin>>x>>n>>m;
    cout<<Mod(x,n,m);
    return 0;
}