//1 to n
//dec and inc order

#include<iostream>
#include<vector>
using namespace std;
int sorteddecprint(int n){
    if(n==1)return 1;
    cout<<n<<" ";
    return sorteddecprint(n-1);
}
int sortedincprint(int n){
    if(n==1)return 1 ;
    sortedincprint(n-1);
    cout<<n<<" ";
    
}
int main(){
    int n;
    cin>>n;
    cout<<sortedincprint(n);
    return 0;
}