#include<iostream>
using namespace std;
bool isPalindrome(string s,int l){
    for(int i=0;i<l/2;i++){
        if(s[i]==s[l-i-1])return true;
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    int l=s.size();
    cout<<s[l-1];
    bool check=isPalindrome(s,l);
    cout<<check;
    return 0;
}