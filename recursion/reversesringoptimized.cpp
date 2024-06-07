#include<iostream>
 using namespace std;
 // reversing using only single pointer approach by doing n-i-1 it is very important to know two pointer question can be solved some time only using the one pointer by doing the n-i-1
 void swapp(string &s,int i){
    if(i>=(s.size()-i-1))
    return;
    if(i<(s.size()-i-1)){
        swap(s[i],s[s.size()-i-1]);
        swapp(s,i+1);
    }
 }

 int main(){
    string s="harikesh";
    swapp(s,0);
    cout<<s;
 }