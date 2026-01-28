#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){

    unordered_map<int,int> map;
    unordered_map<int,int> map2;
    string s="anagram";
    string t="nagaram";

    for(char c:s){

        int key=c-'a';
        map[key]++;
    }

    for(char c: t){

        int key=c-'a';
        map2[key]++;
    }

    if(map==map2){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }


    // sort(s.begin(), s.end());
    // sort(t.begin(), t.end());


    // return s==t;

    return 0;
}