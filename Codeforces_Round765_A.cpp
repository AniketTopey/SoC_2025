#include <iostream>
#include<vector>
using namespace std;

int main() {
  int tt;
  cin>>tt;
  while(tt--){
    int n,l;
    cin>>n>>l;
    vector<vector<int>> arr(n,vector<int>(l,5));
    
    for(int i=0;i<n;i++){
      int entry;
      cin>>entry;
      for(int j=l-1;j>=0;j--){
        arr[i][j]=entry%2;
        entry/=2;
      }
    }
    
    vector<int> ans;
    for(int k=0;k<l;k++){
      int numzeroes = 0;
      for(int i=0;i<n;i++){
        if(arr[i][k]==0) numzeroes++;
      }
      if(n%2==0 && numzeroes >=n/2) ans.push_back(0);
      else if(numzeroes>n/2) ans.push_back(0);
      else ans.push_back(1);
    }
    
    int t=1;
    int res=0;
    for(int i=l-1;i>=0;i--){
      res+=t*ans[i];
      t*=2;
    }
    
    cout<<res<<endl;
    
  }

}
