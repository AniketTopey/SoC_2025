/*
 Question : Given 'n' positive integers such that they follow one of two patterns : non-decreasing (or) non-decreasing then non-increasing , write an algorithm to find the largest entry.
 
 Input :
 7
 1 2 3 4 5 4 3 
 Output : 5
 
 Input : 
 6 
 1 3 4 5 5 2
 Output : 5
 
 Input : 
 5  
 3 5 6 8 8 9
 Output : 9
*/


#include <iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>,int,int);

int main() {
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int start = 0, end = n-1;
  int ans = binarysearch(arr,start,end);
  cout<<ans<<endl;
  
  return 0;
}


int binarysearch(vector<int> arr, int start, int end){
  
  if(start==end) return arr[start];                  // base case
  
  int midindex = (end+start)/2;
  
  if(arr[midindex]>arr[midindex+1]){
    return binarysearch(arr,start,midindex);
  }
  
  else if(arr[midindex]<arr[midindex+1]){
    return binarysearch(arr,midindex+1,end);
  }
  else{
    int leftans = binarysearch(arr,start,midindex);
    int rightans = binarysearch(arr,midindex+1,end);
    return max(leftans,rightans);
  }
  
}
