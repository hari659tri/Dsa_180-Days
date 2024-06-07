#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 // in vector binarysearch 
 // in vector binary_search()
 int main(){
    vector<int>v{10,20,30,30,40,50};
  
   int binary=binary_search(v.begin(),v.end(),300); // if element is present then return true(1) if not present then return false 
   cout<<binary;
   if(binary){
    cout<<"element is found"<<endl;
   }
   else{
    cout<<"element is not found"<<endl;
   }
 }