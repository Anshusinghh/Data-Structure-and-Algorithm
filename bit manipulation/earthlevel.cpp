//Minimum steps required to  kill the alien approaching earth
//alien at Nth level from ground
//hero at ground level
//hero jumps in the power of 2

//for example :-
        //align at 7 level
        //hero->0->4->6->7
        //Minimum 3 steps required

#include<iostream>
using namespace std;
int MinStep(int k,int cnt){
        int x=0;
         while((1<<x)<=k){
            x++;
            }
        x--;
        k=k-(1<<x);
        if(k==0)return cnt;
        cnt++;
        return MinStep(k,cnt);
        }
    

int main(){
    int n,cnt=1;
    cin>>n;
    cout<<MinStep(n,cnt);
    return 0;
}