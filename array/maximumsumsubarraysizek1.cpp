#include<iostream>
#include<vector>
using namespace std;

 long maximumSumSubarray(int K, vector<int> &Arr, int N) {
    int i = 0;
    int j = 0; // window_length = j - i + 1
    long sum = 0;
    long maxsum = -1;
    while (j < Arr.size()) {
        sum = sum + Arr[j];
        if ((j - i + 1) < K) {
            j++;
        }
        else if ((j - i + 1) == K) { // here else if is mandatory to ensure only one of bolck is run at atime 
            maxsum = max(sum, maxsum);
            sum = sum - Arr[i];
            i++; // excluding the initial point
            j++; // including the end point for maintaining the window size
        }
    }
    return maxsum;
}

 int main(){
    vector<int>arr{100,200,300,400};
   cout<<  maximumSumSubarray(2,arr,4);
 }