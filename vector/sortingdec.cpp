#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// sort function by default sort the array in the increasing order but if you used the greater<int> then it sort the given array in the decreasing order 
 int main(){
  vector<int>v={9,-2,-34,9,8,5,1,0,4};
  sort(v.begin(),v.end(),greater<int>()); 
  
  
  for(int &x:v){
   cout<<x<<" ";
  }

 }