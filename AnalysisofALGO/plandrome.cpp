#include<iostream>
using namespace std;
 
  int plandrome(int x){
    //madam this is a plandrome because if we run l to r or r to l gives same
    
     int rem,org,rev=0;
     org=x;

     while (x>0)
     {
        rem=x%10;
        rev=rev*10+rem; //15%10=50+1=51 // be used the concept of           reverse the digit of a number not more then that 
        x=x/10;

     }
     if(org==rev){
        cout<<"number is plandrome";
     } 
     else{
        cout<<"Number is not a plandrome";
     }

    // space complexity O(number of digit) Auxilary space complexity O(1).
  }

int main(){

    int x;
    cin>>x;
    plandrome(x);

}