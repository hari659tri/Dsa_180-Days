#include<iostream>
#include<vector>
using namespace std;
// brute force approach 
 void rotatebyone(vector<int>&v){
    int temp=v[0];
    for(int i=1;i<v.size();i++){
        v[i-1]=v[i];
    }
    v[v.size()-1]=temp;

 }
 // same questions comes in the interview rotate an array by k times
 int rotate(vector<int>&v,int k){
   k=k%v.size();
//    if(k<0){ // k negative means rotate the array in right direction by k+len(v)
//     k=k+v.size();
//    } 
   for(int i=1;i<=k;i++){
     rotatebyone(v);
   }

 }

 // given an array rotate it by one in left direction ACW by one..
 int main(){
     vector<int>v{1,2,3,4,5};
     int k;
     cin>>k;
     rotate(v,k);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }

 }

 // time complexty of this code is O(n*k)
 //Auxilary space  is O(1) // extra space taking to solve it O(1)..