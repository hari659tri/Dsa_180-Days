#include<iostream>
#include<vector>
using namespace std;
 
 pair<int,int>firstlast(int*arr,int x,int n){
    // o(n) approach or brute force solution
     int first=-1;
     int last=-1;
     
     for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1){
                first=i;
            }
            last=1
        }
     }

 }

 int main(){
  int arr[]={3,4,13,13,13,20,40};
  firstlast(arr,13,7);

 }