#include<iostream>
using namespace std;
  // consideration user always provides the input which is greater the or equal to the 1
   void f(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
     f(n-1);
     return;
   }
int main(){
    int n;
    cin>>n;
    f(n);
}

 // time complexity is O(n)
 // Auxilary space compelxity is O(n)....worst case solution iterative solution can solve it in O(1) space complexity  