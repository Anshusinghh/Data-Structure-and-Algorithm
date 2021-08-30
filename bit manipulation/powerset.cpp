//intput: abc
//output: a,b,c,abc,ab,ac,ab

#include<iostream>
using  namespace std;
void powerset(string s){
    int size=s.size();
    int x=1<<size;
    x--;
    while(x--){
        int n=x;
        int i=0;
        while(n>0){
            if(n&1)cout<<s[i];
            i++;
            n=n>>1;
        }
        cout<<endl;
    }
}
int main(){
    string s;
    cin>>s;
    powerset(s);
    return 0;
}