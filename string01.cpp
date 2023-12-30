   #include<iostream>
   #include<string.h>
   #include<bits/stdc++.h>
   using namespace std;

   int main(){
            
    string str;
    getline(cin,str);
    int s=0,e=str.size()-1;
       while(s<e){
        if(str[s]!=str[e]){
          cout<<"it is not a plandrome\n";
          return 0;
        }
        s++;
        e--;
        
       }
        
      cout<<"It is plandrome \n";


    return 0;
 }