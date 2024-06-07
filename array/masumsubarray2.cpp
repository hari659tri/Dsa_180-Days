#include<iostream>
using namespace std;
 /* 
  a=[1,2,3] // 3*(3+1)/2=6
 1 --1
 1-2---3
 1-2-3=6
 2---2
 2-3---5
 3----3

 till j!=n size of array till i is fixed at index of the aray
 if j==n
 i=i+1
 j=i;
   
 sum=0
 maxsum=0
 if(sum>maxsum)
 maxsum=sum 
 
 */
    int  subarraysum(int *arr,int n){
    
    int maxsum=0;
   int sum=0;
     for(int i=0;i<n;i++){
      sum=0; 
      /* 
       i=0  j=0 to n 
       i=1 j=1 to n-1
       i=2 j=2 to n-2
       ......
       i=n-1 j=n-1 to n-(n-1)=1
       
       1+2+3+4+5......n=n*(n+1)/2==O(n^2)
       auxialry space O(1)
      
      */
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    return maxsum;
    }

     // brute force approach used  

int main(){
  int arr[]={-2,1,-3,4,-1,2,1,-5,4};
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<subarraysum(arr,size);
}