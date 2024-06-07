#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

  int main(){
      // creation
     unordered_map<string,int>m;
     // insertion  
     //1
     pair<string,int>p=make_pair("babbar",4);
     m.insert(p);
     //2
     pair<string,int>p2("love",2);
     m.insert(p2);
     //3
     m["mera"]=8;
     m["mera"]=3;
  
  // search
  
//   cout<<m["mera"]<<endl;
//   cout<<m.at("babbar");
   //cout<<m["hum"]; // unknown key value defalut get 0 
   //cout<<m.at("hum");
    // size
   // cout<<m.size();
   //count function to check prsence of a key 
   //cout<<m.count("love");
   // erase/ delete 
 // m.erase("love");
  // cout<<m.size();

 // travers a un-map

//  for(auto i:m){
//     cout<<i.first<<" "<<i.second;
//  }

 // unordered map 
  // using iterator for traversing  
    auto it=m.begin();
  while(it!=m.end()){
    cout<<it->first<<" "<<it->second;
    it++;
  }
 // random order print every key:value in umordered map 

  }