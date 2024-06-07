#include<iostream>
using namespace std;
// brute force approach-taking and extra space to solve this
 void moveZeroAtEnd(int arr[],int n){
     int temp[n]; // taking extra space to solve this -outplace approach
     int count=0;
     for(int i=0;i<n;i++){
         if(arr[i]!=0){
             temp[count]=arr[i];
             count++;
         }
      }
      for(int i=count;i<n;i++){
        temp[i]=0;
      }
      for(int i=0;i<n;i++){
        arr[i]=temp[i];
      }
 }
int main(){
    int arr[]={1,0,2,0,3,0,4,0,5,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    moveZeroAtEnd(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}