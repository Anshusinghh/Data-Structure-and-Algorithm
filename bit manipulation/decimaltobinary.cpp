#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int ans=0,pow=1;
    cin>>n;
    
    // vector<int>a;
    // cin>>n;
    // while(n>0){
    //     a.push_back(n&1);
    //     n=n>>1;
    // }
    // for(int j=a.size()-1;j>=0;j--){
    //     cout<<a[j];
    // }

    while(n>0){
        ans+=pow*(n&1);
        pow*=10;
        n=n>>1;
    }
    cout<<ans;
    return 0;
}