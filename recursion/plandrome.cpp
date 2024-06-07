#include<iostream>
using namespace std;
  // brute force approach 
  void swapp(string &s,int i){
    if(i>=(s.size()-i-1))
    return;
    if(i<(s.size()-i-1)){
        swap(s[i],s[s.size()-i-1]);
        swapp(s,i+1);
    }
 }
   
   // space compelexity of this is incresed to O(2n)=O(n).


 int main(){

     string s="ababae";
     string org=s;// extra space 
     swapp(s,0);
     if(org==s){
        cout<<"string is plandrome";
     }
     else{
        cout<<"String is not plandrome";
     }

    return 0;
 }