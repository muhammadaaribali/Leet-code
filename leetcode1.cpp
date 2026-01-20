#include<iostream>
using namespace std;
int main(){
int arr[]={3,3};
int size=sizeof(arr)/sizeof(arr[0]);
int target,i,j;
cin>>target;
for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(arr[i]+arr[j]==target){
            cout<<i<<" "<<j<<endl;
            break;
        }
    }
}
return 0;
}