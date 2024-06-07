#include<iostream>
using namespace std;
 
  int binary_search(int *arr,int low,int high,int key){
    // base case
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(arr[mid]==key)
    return mid;
    else if(arr[mid]>key)
   return binary_search(arr,low,mid-1,key);
    else
   return binary_search(arr,mid+1,high,key);
   
  }
   
  int main(){
 
   int arr[]= {3, 4, 6, 7, 9, 12, 16, 17};
  cout<< binary_search(arr,0,7,6);
    return 0;
  }