#include<iostream>
using namespace std;

 void binary(int n){
    if(n==0)
    return;
    binary(n/2);
    cout<<n%2;
 }

 int main(){
    int n;
    cout<<"entre the decimal number you want to convert into binary";
    cin>>n;
    binary(n);
 }

 // concept for conversion from binary to decimal is orvice versa jis bhi base me jana hai usei base se given number divide till quotent becomes zero and write the digit from bottom to top  

 // time complexity of this code is O(logn)
 // auxilary space  is O(Lo)