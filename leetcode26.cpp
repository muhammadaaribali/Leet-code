#include <iostream>
using namespace std;
int main()
{
    cout<<"24P-3036"<<endl;
    
    int arr[]={1,2,2,3,3,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                int first=arr[j];
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                arr[size-1]=first;
                size--;
                j--;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

  
return 0;
}