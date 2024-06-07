#include<iostream>
using namespace std;
   
   // in selection sort always first find the minimum index then swap taken in the array  not swap with taking any value 


 void selection(int*arr,int size){
    int mini;
    for(int i=0;i<size-1;i++){
        mini=i;
        for(int j=i+1;j<size;j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
 }
 // time complexity is O(n^2) for all the cases.....
 // space complexity is O(1)
 int main(){
    int arr[]={13,46,24,52,20,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    selection(arr,size);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
 }