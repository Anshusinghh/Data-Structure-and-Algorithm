#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int>a;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int res=0;
    for(auto x:a)res^=x;

    cout<<res;

   
    return 0;
}