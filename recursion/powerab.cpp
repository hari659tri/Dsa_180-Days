#include<iostream>
using namespace std;
    // correct code for the doing this job.
    int pow(int a,int b){
        if(b==0){
       return 1;
        }
        if(b==1){ 
            return a;
        }
        int ans=pow(a,b/2);
     if(b%2==0){
      return ans*ans;
     }
     else{
     return a*ans*ans;
     }  
     }


 int main(){
   
   int a,b;
   cin>>a>>b;
   int ans=pow(a,b);
   cout<<ans;
   return 0;

 }