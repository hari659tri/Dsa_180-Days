#include<iostream>
using namespace std;
 
  int count(int*arr,int n){
    int s=0;
    int e=n-1;
    int mid;
     
      while(s<=e){
       mid=s+(e-s)/2;
       if(arr[mid]==0){
        s=mid+1;
       }else{
        
       }





      }


  }


  int main(){
    int arr[]= {0,0, 0, 0, 0, 1, 1};
    count(arr,7);
  }