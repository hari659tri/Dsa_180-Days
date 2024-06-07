#include<iostream>
using namespace std;
  // best solution by the ecludian subtraction  method
  // algorithm-> 1.find the larger number 2.replace the larger number by the difference of the larger number and the smaller number differnce 3. repeat the step 1 and 2 untill both numbers becomes equal 4. return any one number which is the gcd

 int gcd(int a,int b){
    while(a!=b){
    if(a>b){
        a=a-b;
    }
    else{
        b=b-a;
    }
    }
    return a;
 }
 int main(){

   int a,b;
   cin>>a>>b;
  cout<< gcd(a,b);


    return 0;
 }

 // time compelexity is O(max(a,b))