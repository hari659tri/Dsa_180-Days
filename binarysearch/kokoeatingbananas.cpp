#include<iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;
 // catch in this question is range of the value k is from 1 to max element in the array 
  int findmax(int *arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    return maxi;
  }
  int timescal(int *arr,int hourly,int n){
    int time=0;
    for(int i=0;i<n;i++){
        time+=ceil(((double)arr[i]/hourly));
    
    }
    return time ;
  }


  int Minbanaeat(int*piles,int n,int h){
    int maxi=findmax(piles,n);
    for(int i=1;i<=maxi;i++){
     int time=timescal(piles,i,n);
     if(time<=h){
        return i;
     }
    }
  }

 int main(){

    int piles[]={3,6,7,11};
    int h=8;
   cout<<Minbanaeat(piles,4,h);
   
  // time complexity of this code will  be 
  // O(Maxi*n)
  // auxilary space is O(1)....


}