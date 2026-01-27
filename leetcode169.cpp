#include <iostream>
#include<unordered_map>
using namespace std;

int main(){

    int arr[]={3,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=size/2; //1
    unordered_map<int,int> map;

    for(int x:arr){

        map[x]++;

        if(map[x]>n){
            cout<<x<<endl;
        }
    }

    
    return 0;
}