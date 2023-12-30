  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;

   int main(){

    vector<int>upper(26,0);
    vector<int>lower(26,0);
      string s;
      getline(cin,s);
     for(int i=0;i<s.size();i++){
      if(s[i]>='a'){
        lower[s[i]-'a']++;
      }
      else{
        upper[s[i]-'A']++;
      }

     }
        for(int i=0;i<lower.size();i++){
        cout<<lower[i];
       }
        cout<<endl;
    
      for(int i=0;i<upper.size();i++){
        cout<<upper[i];
       }

     return 0;

  }