#include<iostream>
using namespace std;
int main(){
    char route[1000];
    cin.getline(route,1000);
    int x=0,y=0;
    for(int i=0;route[i]!='\0';i++){
        switch(route[i]){
            case 'N': y++;
                break;
            case 'S':y--;
                break;
            case 'E':x++;
                break;
            case 'W':x--;
                break;
        }

    }
    if(x>=0 && y>=0){
        while(y--)cout<<"N";
        while(x--)cout<<"E";
    }
    // if(x>=0 && y<=0){
    //     while(y++)cout<<"S";
    //     while(x--)cout<<"E";
    // }
    // if(x<=0 && y<=0){
    //     while(y!=0)cout<<"S";
    //     while(x!=0)cout<<"W";
    // }
    // if(x<=0 && y>=0){
    //     while(y--)cout<<"N";
    //     while(x!=0)cout<<"W";
    // }
}