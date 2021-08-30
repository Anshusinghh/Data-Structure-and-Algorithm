#include<iostream>
#include<vector>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    vector<char>c(1000,0);
    for(int i=0;i<a.length();i++){
        
        c[a[i]]++;
    }
    for(int i=0;i<b.length();i++){
    
        if(c[b[i]]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}