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
    
    if(list[0]>list[1]) cout<<list[0]+list[1]<<endl;
    else cout<<2*list[0]<<endl;

  }
  
  return 0;

}
