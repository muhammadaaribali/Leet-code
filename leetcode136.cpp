#include <iostream>
using namespace std;
int main(){
int arr[]={4,1,2,1,2};
int i,j;
    for( i=0;i<5;i++){
        int alrcount=0;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                alrcount=1;
                break;
            }
        }
        if(alrcount==0){
            int count=0;
            for(j=0;j<5;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count==1){
                cout<<arr[i];
            }
        }
    }
return 0;
}