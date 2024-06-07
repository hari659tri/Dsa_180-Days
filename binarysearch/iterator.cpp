#include<bits/stdc++.h>
using namespace std;

 int main(){
  // iterator of a vector
    vector<int>v{23,56,88,99};
   vector<int>::iterator it=v.begin(); // auto it=v.begin()
   // auto keyword is a keyword that is 
   // that type decide by the compiler at run 
   /// auto i=23;
    // compiler decoide type of i is int 
//    cout<<(*it)<<endl;//& arr[i]==*(arr+i)
//   // iterator of a list set map etc 
//   it++;
//     cout<<(*it)<<endl;
  
//    it=v.end();
//    it--;
//    cout<<*it<<endl;
 
 it=next(it,2);
 cout<<*it<<endl;
 it=prev(it);
 cout<<*it<<endl;

/*

  advance  // iterantor value n times
  adance(it,n);
  next prev  by default =next and prev increment by one 
  syntax 
  i=next(i,2)  // by default go one place ahead
  i=prev(i,2)  //by default go one place back




*/

 } 
 