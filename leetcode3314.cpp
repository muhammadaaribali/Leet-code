#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool check(int i,int x){

    int x1=i;
    int x2=i+1;

    int res= x1| x2;

    if(res==x){
        return true;
    }

    else{
        return false;
    }

}
int main()
{
    
    vector<int> v;
    int arr[]={2,3,5,7};
    bool tosee;

    for(int x:arr){

        tosee=false;

        for(int i=1;i<x;i++){

            if(check(i,x)){

                v.push_back(i);
                tosee=true;
                break;
            }
        }

        if(tosee==false){
            v.push_back(-1);
        }
    }
    

    for(int x: v){
        cout<<x<<" "<<endl;
    }
  
return 0;
}