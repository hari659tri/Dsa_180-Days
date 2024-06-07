#include<iostream> 
using namespace std;

// printing frequency of the character in the sorted order's 


 int main(){
    string str="aabbsscccdddeeffkkllppprrwwwwwzzzfoa";
    int count[26]={0};
    
    // conting the frequency of the every character....
    for(int i=0;i<str.size();i++){
        count[str[i]-'a']++;
    }
  
    for(int i=0;i<26;i++){
        if(count[i]>0){
            cout<<(char)(i+'a')<<" "<<count[i]<<endl;
        }
    }


 }