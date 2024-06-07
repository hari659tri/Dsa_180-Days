#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 
 int main(){
    vector<vector<int>>arr[3][2]={{1,0},{0,3},{1,2}};

     sort(arr.begin(),arr.end())
      for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" "
        }
      }
 }