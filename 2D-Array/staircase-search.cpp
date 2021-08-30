/*
    Array given is row wise and column wise sorted

    {{10,20,30,40},
    {15,25,35,45},
    {27,29,37,48},
    {32,33,39,50}}

    to find a certain number from this array have multiple ways
    1.brute force:-linear search every element but we are not using given info(O(n*m))
    2.binary search:-(O(nlogm))every row elements
    3.staircase search(best solution) with worst case (O(n+m))


*/
//++++++STAIRCASE SEARCH+++++++++++++

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    if(key<a[0][0] || key>a[n-1][m-1])
    {
        cout<<"Not in the Array";
        return 0;
    }
    int start=0,end=m-1;
    while(start<n && end>=0){
        
           if(key==a[start][end]){
               cout<<start<<" "<<end;
               return 0;
           }
           
               else if(key<=a[start][end-1]){ 
                   end--;

               }
               
           else{
               start++;
           }
        
    }
    cout<<"Not found in the array";
    return 0;
}