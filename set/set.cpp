#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;



 int main(){

    set<int,greater<int>>s; // by help of this greater<int> you can reverse the order of the set....
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(3);
    s.insert(-1);
    s.insert(-10);
    s.insert(0);
    s.insert(3);
    // for(auto x:s){
    //     cout<<x<<" ";
    // } 
    // for traversing set data structure  you can't used traditional for(int i=0;i<n;i++) loop because set ds is implemeneted by the help of binary search tree show due to this you can't do this....


   //by default it print the value in the sorted order<int>() function if you provide any duplicate value then it simply ignore that value 
    // traversing using the iterstors only...
    set<int>::iterator i=s.begin();
    
    while(i!=s.end()){
        cout<<*i<<" ";
        i++;
    }
   


 }


