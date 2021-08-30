//difine the structure for last two columns and a condition to iterate it.

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
    int endcolStart=m-1,altcolEnd=m-2;

    //builds the structure

    while(endcolStart>=0){
        //last col
        for(int row=0;row<n;row++){
            cout<<a[row][endcolStart]<<" ";
        }
        //last col-1
        if(altcolEnd>=0){
            for(int row=n-1;row>=0;row--){
            cout<<a[row][altcolEnd]<<" ";
        }
        }
        //condition for iteration
        
        endcolStart-=2;
        altcolEnd-=2;
    }
    return 0;
}