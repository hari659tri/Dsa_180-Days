#include<iostream>
#include<vector>
using namespace std;
   
   vector<int> leader(vector<int>&arr){
       
       vector<int>temp;// extra space O(no of leader)  // time complexity o(n^2)
       bool lead;
        for(int i=0;i<arr.size()-1;i++){
           lead=true;
            for(int j=i+1;j<arr.size();j++){
               if(arr[i]<=arr[j]){
                 lead=false; 
                 break;
               }
            }
            if(lead==true){
                temp.push_back(arr[i]);
            }
         
        }
        temp.push_back(arr[arr.size()-1]);
       return temp;
    }
   
 int main(){
    vector<int>arr{8,11,5,11,7,6,3};
   arr= leader(arr);
      for(int &i:arr){
        cout<<i<<" ";
      }
 }