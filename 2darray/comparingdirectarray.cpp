#include<iostream>
#include<vector>
using namespace std;
 
 int main(){
 // for 1-d array we can direct compare by using (==) to 1d array when following condition are meet...
 //1.Both arrays must have the same size n else not
 // egample....
  vector<int> array1 = {1, 2, 3,5};
  vector<int> array2 = {1, 2, 3, 4};
  bool result = (array1 == array2); // Will return true
  
  cout<<result;


 // similarly for 2d array both array must have the same order that is same row and coloumn 



 }