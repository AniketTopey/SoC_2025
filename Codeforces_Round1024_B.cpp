#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main() {
 
  int N;
  cin>>N;
  
  for(int i=0;i<N;i++){
    
    int n;
    cin>>n;
    int  req_index = (n-1)/2;
    vector<int> list;
    for(int j=0;j<n;j++){
      int entry;
      cin>>entry;
      list.push_back(abs(entry));
    }
    
    int num = list[0];
    
    sort(list.begin(),list.end());
    
    int k=0;
    for(;k<n;k++){
      if(list[k]==num) break;
    }
    
    if(k<=(n/2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
  }
  
}