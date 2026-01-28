#include <iostream>
using namespace std;

int main(){

    int arr[]={0,1,0,3,12};
    int size=sizeof(arr)/sizeof(arr[0]);

    int count=0;

    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            swap(arr[count],arr[i]);
            count++;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}