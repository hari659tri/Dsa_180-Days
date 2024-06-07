#include<iostream>
using namespace std;
 // non tail recursion
  void f(int n){
    if(n==0){
        return;
    }
    else{
        f(n-1);
        cout<<n<<"";
    }

  }
int main(){
 
 int n;
 cin>>n;
 f(n);



    return 0;
}