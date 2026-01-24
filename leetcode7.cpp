#include<iostream>
using namespace std;
int main(){
int n,count=0,d;
cin>>n;
while(n){
    d=n%10;
    count=count*10+d;
    n=n/10;
}
cout<<count;
return 0;
}