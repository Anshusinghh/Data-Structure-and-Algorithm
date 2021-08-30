#include<iostream>
using namespace std;

 //time complexiety of below program is O(nlogn)


        // while(n--){
        //    int i=n;
        //     while(i>0){
        //         if(i&1){
        //             cnt++;
                    
        //         }
        //         i=i>>1;
        //     }
            
        //     i++;
        // }

//below timecomplexiety: O(logn)
    //space comp: O(1)

    int checkpow(int &n){
        int x=0;
    while((1<<x)<=n){
            x++;
        }
        return x-1;
    }
    int countsetbits(int n){
        int x=checkpow(n);
        n=n-(1<<x);
        
        if(n==0)return x*(1<<(x-1));

        return  (x*(1<<(x-1)))+n+countsetbits(n);
        
    }
int main(){
    int n;
    cin>>n;
    n++;
   cout<<countsetbits(n);
    return 0;
}