#include <iostream>
#include<vector>
using namespace std;

int main(){
  int t,n,x;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>x;
    vector<int> list;
    for(int j=0; j<n ;j++){
      int entry;
      cin>>entry;
      list.push_back(entry);
    }
    
    int index=0;
    while(true){
      if(list[index]==1) break;
      index++;
    }
    
    bool canpass = true;    
    
    if(index+x < n){
      for(int k=index+x; k<n; k++){
       if(list[k]==1){
         canpass=false;
          break;
        }
     }
    }
    
    if(canpass) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  
  return 0;
}
