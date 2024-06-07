#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<pair<int,int>>p;
    p.push({2,3});
    cout<<p.top().second;
}