/*
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
*/
//11 multiple

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>fill(n);
    for(int i=0;i<n;i++){
        fill[i].resize(i+1); //this func resizes to the size given for the vector.
        //New size to i+1
        fill[i][0]=fill[i][i]=1;

        for(int j=1;j<i;j++){
            fill[i][j]=fill[i-1][j-1]+fill[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fill[i][j]<<" ";
        }
        cout<<endl;
    }
}