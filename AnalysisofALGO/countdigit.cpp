#include<iostream>
using namespace std;

 int count(int x){
    int c=0;
    while(x!=0){
        x=x/10; // removing the last first digit if divide by 10 and if divide by 100 then two digit gone
       c++;
    }

    return c;
 }

 // time complexity is O(number of digit) and Auxilary space is O(1).

 int main(){
    int x;
    cout<<"Entre the number";
    cin>>x;
   int n=count(x);
   cout<<n;
    return 0;
 }