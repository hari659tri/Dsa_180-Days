#include<iostream>
using namespace std;
// brute force approach-taking and extra space to solve this 
// outplace approach i.e taking extra space to solve this
  int removeDuplicates(int arr[],int n){
      int temp[n]; // taking extra space to solve this -outplace approach
      temp[0]=arr[0];
      int res=1;
      for(int i=1;i<n;i++){
          if(temp[res-1]!=arr[i]){
              temp[res]=arr[i];
              res++;
          }
      }
      for(int i=0;i<res;i++){
          cout<<temp[i]<<" ";
      }
      return res;
  }


 int main(){
    int arr[]={1,2,2,3,4,4,5,5,5,6,7,8,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    removeDuplicates(arr,n);

    return 0;
 }