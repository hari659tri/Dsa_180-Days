#include<iostream>
using namespace std;
 
// reference variable concept are used 
 void swapp(string &s,int start,int end){
      if(start>=end){
        return;
      }

      if(start<end){
        swap(s[start],s[end]);
        swapp(s,start+1,end-1);
      }
 }

 int main(){

    string s="babbar";
    swapp(s,0,s.size()-1);
    cout<<s<<endl;

 }

 // time complexity O(n) and auilary space O(n)