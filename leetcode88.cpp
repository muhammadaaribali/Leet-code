#include <iostream>
using namespace std;
int main()
{
    int nums1[]={1,2,3,0,0,0};
    int m=3;
    int nums2[]={2,5,6};
    int n=3;

    for(int i=m,j=0;i<m+n;i++,j++){

        nums1[i]=nums2[j];
    }

    
    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<n+m;i++){

        for(int j=i+1;j<n+m;j++){

            if(nums1[i]>nums1[j]){

                int temp=nums1[i];
                nums1[i]=nums1[j];
                nums1[j]=temp;
            }
        }
    }

    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }
  
return 0;
}