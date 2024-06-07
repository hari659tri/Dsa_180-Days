#include<iostream>
using namespace std;


int main(){

    int x;
    cin>>x;
    int fact=1;
    int count=0;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    } 
    
       while(fact%10==0){
            count++;
            fact=fact/10;

       }
        
        cout<<count;
      
 

    return 0;
}