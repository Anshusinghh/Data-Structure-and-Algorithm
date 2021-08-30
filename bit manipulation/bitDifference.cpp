//bit difference 
//to convert A to B by flipping bits
//A=10 and B=20
//A  = 01010
// B  = 10100
//4 bits needed to be flipped

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
        
        while(a>0 || b>0){
            int x=a&1;
            int y=b&1;
            if(x == y){
                a=a>>1;
                b=b>>1;
                
            }
            else {
                cnt++;
                a=a>>1;
                b=b>>1;
            }
        }
        cout<<cnt;
        return 0;
}