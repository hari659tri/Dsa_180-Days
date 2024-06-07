#include<iostream>
#include<vector>
using namespace std;
 
 void merge(int*arr,int low,int mid,int high){
     vector<int>temp;
     int i=low;
     int j=mid+1;
     while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
         temp.push_back(arr[j]);
         j++;
        }
     }
    while (i<=mid){
        temp.push_back(arr[i]);
        i++;
     }
    
     while(j<=high){
        temp.push_back(arr[j]);
        j++;
     }
     
     for(int k=low;k<=high;k++){
       arr[k]=temp[k-low];
     }

    }



   void mergesort(int*arr,int low,int high){
    // base case 
     if(low==high)
     return;
     int mid=low+(high-low)/2;
     mergesort(arr,low,mid);
     mergesort(arr,mid+1,high);
     merge(arr,low,mid,high);
   }


 int main(){
  int arr[]={3,2,8,5,1,4,23};
  int  low=0;
  int  high=6;
   mergesort(arr,low,high);
   // ranged based for loop not able to access it 
   for(int i=0;i<=high;i++){
    cout<<arr[i]<<" ";
   }
 }