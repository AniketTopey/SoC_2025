#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  int tt;
  cin>>tt;
  while(tt--){
    int n;
    cin>>n;
    
    vector<int> list;
    for(int i=0;i<n;i++){
      int entry;
      cin>>entry;
      list.push_back(entry);
    }
    
    bool increasing = true;
    int highest = list[0];
    
    for(int i=1;i<n;i++){
      if(list[i]>=highest) highest = list[i];
      else {
        increasing = false;
        cout<<"YES"<<endl;
        cout<<"2"<<endl;
        cout<<highest<<" "<<list[i]<<endl;
        break;
      }
    }
    
    if(increasing) cout<<"NO"<<endl;    
  }

}
