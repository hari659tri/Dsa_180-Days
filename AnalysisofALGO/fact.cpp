#include<iostream>
using namespace std;

  int fun(int n){
    // base case 

     if(n==0||n==1){
        return 1;
     }
     return n*fun(n-1);
      //  for recusive solution O(n) complexity and O(n) auxilary space show iterative is best
       }
  
int main(){
   
   int n; // 5!=5*4*3*2*1
   long long  fact=1;
   cin>>n;
   // iterative approach
//     for(int i=2;i<=n;i++){
//         fact=fact*i;
//     }

//    cout<<fact; 
//    // time complexity is O(n) and space complexity is O(1)

  // recursive approach are:

  cout<< fun(n);
 
  return 0;
}