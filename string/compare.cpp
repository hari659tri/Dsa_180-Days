#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

// here we are compared two character's of the string 

  bool cmp(char x,char y){
    return x<y;
  }

 int main(){
//    char x='a';
//    char y='b';
//    cout<<cmp(x,y);
    
    // string s="dm";
    // int num=stoi(s);
    // cout<<num;
 
  vector<int>v{5,6,3,7,0};
  
  sort(v.begin(),v.end(),cmp);

  for(int x:v){
    cout<<x<<" ";
  }

 }