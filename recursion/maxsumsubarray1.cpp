#include<iostream>
using namespace std;
 int subarraysum(int *arr,int n){
    int sum =0;
    int maxsum=0;
   for(int i=0;i<n;i++){
    sum=0;
    for(int j=i;j<n;j++){
        sum=sum+arr[j];
        if(sum>maxsum){
            maxsum=sum;
        }
    }
   }
   return maxsum;
 }
 int main(){
    int arr[]={1,2,3,4,5};
     int size=sizeof(arr)/sizeof(arr[0]);
     cout<<subarraysum(arr,5);

 }