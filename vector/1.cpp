#include<iostream>
#include<vector>
using namespace std;

 int main(){
     
     vector<int> v; // creates an a empty vector of size 0 
     v.push_back(2);
     v.push_back(4);
     v.push_back(8);
     v.push_back(10);
     
     // accesing vector values by normal ways
    //  for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    //  }
   // by using the abnormal ways....

//    for(int &x:v){  // this is the another method to acces the vector values must used the reference variable because the so that copy not created 
//     cout<<x<<" ";
//    }


 // 3rd method for the accesing the value of vctor are
 // using the iterator
  
//   for(auto it=v.begin();it!=v.end();it++)
//   cout<<*it<<" ";

  for(int &x:v) // without reference work fine but with reference it is good...
  cout<<x<<" ";


    return 0;
 }