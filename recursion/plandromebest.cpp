#include<iostream>
using namespace std;
  // best solution approach 
//   void swapp(string &s,int i){
//     if(i>=(s.size()-i-1))
//     return;
//     if(i<(s.size()-i-1)){
//         swap(s[i],s[s.size()-i-1]);
//         swapp(s,i+1);
//     }
//  }
   
   

 int main(){

     string s="";
     int i=0;
     int e=s.size()-1;
     while(i<e){
        if(s[i]==s[e]){
          i++;
          e--;
        }
        else{
            cout<<"It is not a plandrome";
            break;
        }
     }

      if(i>=e){
        cout<<"This is a plandrome";
      }
     
      // time complexity is O(n) and auxilary space is O(1)

    return 0;
 }