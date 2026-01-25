#include <iostream>
using namespace std;

int main(){

    int arr[]={3,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=size/2; //1

    int count;

    for(int i=0;i<size;i++){

        count=0;
        for(int j=0;j<size;j++){

            if(arr[i]==arr[j]){
                count++;
            }
        }

        if(count>n){
            cout<<"Majority element : "<<arr[i]<<endl;
            return 0;
        }

    }

    
    return 0;
}