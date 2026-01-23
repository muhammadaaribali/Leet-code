#include <iostream>
using namespace std;
int main()
{
    
    int arr[]={0,1,2,2,3,0,4,2};
    int val=2;
    int size=sizeof(arr)/sizeof(arr[0]);

    
    for(int i=0;i<size;i++){
        if(arr[i]==val){

            int first=arr[i];

            for(int j=i;j<size-1;j++){
                arr[j]=arr[j+1];
            }
            arr[size-1]=first;

            i--;
            size--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<size;
  
return 0;
}