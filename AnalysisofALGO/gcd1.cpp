#include<iostream>
using namespace std;

 int main(){
   int a,b;
   cout<<"Entre the number you want to find the hcf";
   cin>>a>>b;
   int mini= min(a,b);
   while(mini>0){
    if(a%mini==0&&b%mini==0){
        cout<<mini;
        break;
    }
    mini--;

   }
    return 0;
 }
 
 // brute force approach its time compelexity if O(min(a,b)) and space complexity if O(1)