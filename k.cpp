#include<iostream>

using namespace std;

int fun( string s,int start, int end){
    if(start>end){
        return 1;
    }
    if(s[start] != s[end]){
        return 0;
    }
    return fun(s,start+1,end-1);
}

int main(){
    string s="abba";
     int n=s.size();
    cout<<fun(s,0,n-1);
     return 0;
}