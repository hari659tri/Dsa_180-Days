#include<iostream>
using namespace std;
  int f(int n){
    if(n==0)
    return 1;

    return 2*f(n-1);
  }
  
 int main(){
  
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
} 

 // time comlexity O(n) and space compexity is O(n)



