#include<iostream>
using namespace std;
#include<vector>

 int main(){
    vector<int>v{1,2,3,4}; // another way to initialize the vector 
    cout<<v.size()<<endl; // vector of size will be 4
    v.push_back(34);
    cout<<v.capacity(); // basically double the size of the newly created vector.

 }