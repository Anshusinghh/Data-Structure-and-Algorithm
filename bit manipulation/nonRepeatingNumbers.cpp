//{5,4,1,4,3,5,1,2}
//output: 3,2

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >a;
    int n,pos=0,i=0;
    int res=0,one=0,two=0;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        a.push_back(x);
        
        res^=x;
    }
    one=two=res;
    
    while(res>0){
        if(res&1)break;

        res=res>>1;
        pos++;
    }
    n=a.size();
   while(n--){
       //right shift to the position to find set bit

        a[i]=a[i]>>pos;

        //below creates two buckets and non repeating number gets seprated

       if(a[i]&1)one^=a[i];
       else two^=a[i];
       i++;
   }
  
   cout<<one<<" "<<two;
   return 0;
}