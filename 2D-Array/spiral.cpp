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
    //four var for better control over the array
    int startrow=0,endrow=n-1,startcol=0,endcol=m-1;

    //building the structure

    while(startcol<=endcol && startrow<=endrow){

        //for first row
        for(int col=startcol;col<=endcol;col++){
            cout<<a[startrow][col]<<" ";
        }
        //for end column
        for(int row=startrow+1;row<=endrow;row++){
            //this is when m>n
            if(startrow==endrow)break;

            cout<<a[row][endcol]<<" ";
        }
        //for end row
        for(int col=endcol-1;col>=startcol;col--){
            cout<<a[endrow][col]<<" ";
        }
        //for start column
        for(int row=endrow-1;row>=startrow+1;row--){
            //n>m
            if(startcol==endcol)break;

            cout<<a[row][startcol]<<" ";
        }
        startrow++;
        endrow--;
        startcol++;
        endcol--;
    }


}