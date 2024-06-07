#include<iostream>
#include<vector>
using namespace std;

  int merge(int*arr1,int*arr2,int n1,int n2 ){
    // we are used two ponter approach to merge this array 
    int i=0;
    int j=0;
    int n=n1+n2;
    vector<int>arr;

      
    while(i<n1&&j<n2){ 
        if(arr1[i]<=arr2[j]){
           arr.push_back(arr1[i]);
           i++;
        }
        else{
           arr.push_back(arr2[j]);
            j++;
        }
     }
     // above loop in the worst case senario running n1+n2 times 
     while(i<n1){
       arr.push_back(arr1[i]);
        i++;
     }  
     // at the worst case above loop run is O(n1)
     while(j<n2){
       arr.push_back(arr2[j]);
        j++;
    }
    // simlarly in  worst case is O(n2)
    if(n%2==0){
        return (arr[n/2]+arr[n/2-1])/2;
    }
    else{
        return arr[n/2];
    }

   // time complexity is O(n1+n2).
   // Auxilary space that we used is O(n1+n2).

  }



 int main(){
   int arr1[]={1,2,3,4};
   int arr2[]={6,8,9,22};
   int n1=sizeof(arr1)/sizeof(arr1[0]);
   int n2=sizeof(arr2)/sizeof(arr2[0]);
   cout<< merge(arr1,arr2,n1,n2);
    return 0;
}