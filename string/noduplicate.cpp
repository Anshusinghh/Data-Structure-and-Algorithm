#include<iostream>
#include<vector>
using namespace std;
int main(){
    string a;
    cin>>a;
    vector<char>cha(200,0);
    for(int i=0;i<a.length();i++){
        cha[a[i]]++;
    }
    for(int i=0;i<200;i++){
        if(cha[i]!=0)cout<<char(i);
    }
}