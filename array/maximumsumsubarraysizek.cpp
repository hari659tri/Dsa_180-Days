#include<iostream>
#include<climits>
using namespace std;
   //  brute force approach in  O(n^2)
  int maxsumsubarray(int *arr,int n,int k){
     int maxsum=INT_MIN;
     int sum;
     for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<i+k;j++){
            sum=sum+arr[j];
            maxsum=max(maxsum,sum);
        }
     }
     return maxsum;
  }
 int main(){
   
   int arr[]={100,200,300,400};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<maxsumsubarray(arr,n,2);

 }