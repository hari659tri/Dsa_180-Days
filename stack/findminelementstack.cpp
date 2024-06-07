#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
    // O(N) Time complexity and O(1) Auxilary space used by this code......
    int  findelement(stack<int>&s){
        int ans=INT_MAX;
        while(!s.empty()){
            if(ans>s.top()){
                ans=s.top();
                s.pop();
            }
        }
        return ans;
    }


 int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<findelement(st);
   
 }