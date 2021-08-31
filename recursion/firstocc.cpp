//first occurence of the element in array

#include<iostream>
using namespace std;
int occurence(int a[],int n,int &k){
    if(n==0)return 0;
    if(a[0]==k)return 1;
    return occurence(a+1,n-1,k);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;cin>>k;n--;
    cout<<occurence(a,n,k);
}