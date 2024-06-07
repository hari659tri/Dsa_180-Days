#include<iostream>
#include<vector>
using namespace std;
// always pass vector in a function the help of the refernce 
//  vector<int> f(vector<int> &v){
//     v.push_back(90);
//     v.push_back(59);

//  }
// instead of modification if you want to print or only access the vector so you used the concept of the const 
 vector<int> f(const vector<int> &v){
     for(const int &x:v){
        cout<<x<<" ";
     }
     // v.push_back() throw an a error  
     }
 int main(){
    vector<int>v{10,20,30};
    f(v);
//     for(int &x:v){
//    cout<<x<<" ";
//     }
 }