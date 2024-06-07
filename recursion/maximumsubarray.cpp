#include<iostream> 
using namespace std;
// max sum of subarray better approach
 int maxsubarray(int *arr){
    int maxsum =0;
    int sum;
    
     for(int i=0;i<5;i++){
      sum=0;
      for(int j=i;j<5;j++){
         sum=sum+arr[j];
         if(sum>maxsum){
            maxsum=sum;
      }
   
    }
     }
    
     return maxsum;
 }
    
  //  time complexity of this code is O(n^2)
  // Auxilary space is O(1)...no extra space is used

 int main(){

    int arr[]={5,4,-1,7,8};
      cout<<maxsubarray(arr);
 }