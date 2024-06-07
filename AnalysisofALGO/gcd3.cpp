#include<iostream>
using namespace std;
   int gcd(int a,int b){
    // base case 
    if(a==0||b==0){
        if(a!=0){
            return a;
        }
        else{
            return b;
        }
    }
    
    if(a>b){
       return gcd(a%b,b);
    }
    else{
      return gcd(a,b%a);
    }
    // we can write above written code in consise formated no need to check the  greater or lesser condition. 

    // if(b==0){
    //     return a;
    // }
    // else{
    //     return gcd(b,a%b);
    // }

   }

 int main(){

    int a,b;
    cin >> a >> b;
    cout<<gcd(a,b);
 }

 // this is the optimal solution with time complexity is O(logn) and space complexity is O(logn)

 //Optimal solution by the ecludian division method
 // 1. divide the larger number by the smaller number 
 // 2.replace the larger number with its remander
 // 3.the moment remainder becomes zero then then non zero number is your hcf or the divsior is your hcf.