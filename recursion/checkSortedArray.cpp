//check if the array is sorted or not

#include<iostream>
#include<vector>
using namespace std;
bool check(int a[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(a[0]<a[1] && check(a+1,n-1)){
        return true;

    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<check(a,n);
    return 0;
}