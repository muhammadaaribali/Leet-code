#include<iostream>
using namespace std;
int main(){
string s,s2;
int i,j;
getline(cin,s);
for( i=0;s[i]!='\0';i++){
    if(s[i]>='A'&&s[i]<='Z'){
        s2+=(s[i]+32);
    }
    if(s[i]>='a'&&s[i]<='z'){
        s2+=s[i];
    }
    if(s[i]>='0'&&s[i]<='9'){
        s2+=s[i];
    }
    else{
        continue;
    }
}
int size=0;
for(i=0;s2[i]!='\0';i++){
    size++;
}
cout<<s2;
for(i=0,j=size-1;i<j;i++,j--){
if(s2[i]!=s2[j]){
    cout<<"Not palendrome";
    break;
}
if(i>=j){
    cout<<"Palendrome";
}
}

return 0;
}