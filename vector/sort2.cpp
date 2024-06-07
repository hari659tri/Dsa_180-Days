#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 // here we are sorting the vectored arrays 

 
 int main(){
    vector<int> arr={30,20,10};
    sort(arr.begin(),arr.end());
    for(int&x:arr){
       cout<<x<<" ";
    }
     
 }