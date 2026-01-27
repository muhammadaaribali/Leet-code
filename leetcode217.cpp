#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<int,int> map;
    int nums[]={1,2,3,1};
    bool isee=false;

    for(int x:nums){
        map[x]++;

        if(map[x]>=2){

            isee=true;
        }
    }

    cout<<isee<<endl;


    return 0;
}