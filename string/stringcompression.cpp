#include<iostream>
#include<vector>
using namespace std;

string stringCompression(string s,int l){
    string output;
    int count;
    for(int i=0;i<l;i++){
        count=1;
        while(i<l && s[i+1]==s[i]){
            count++;
            i++;
        }
        output+=s[i];
        output+=to_string(count);
        
    }
    if(output.length()>=s.length())return s;
     return output;

}
int main(){
    string s;
    cin>>s;
    int l=s.size();
    cout<<stringCompression(s,l);
    return 0;
}