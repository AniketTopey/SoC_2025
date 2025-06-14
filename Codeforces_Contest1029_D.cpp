#include <iostream>
#include<vector>
using namespace std;

bool isExplodable(vector<int>);
vector<int> opone(vector<int>);
vector<int> optwo(vector<int>);

int main(){
  
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    
    vector<int> list;
    for(int j=0;j<n;j++){
      int entry;
      cin>>entry;
      list.push_back(entry);
    }
    
  if(isExplodable(list)) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
    
  }

  return 0;
}

bool isExplodable(vector<int> list){
  
  bool b = true;
  for(int p=0;p<list.size();p++){
    if(list[p]!=0){
    b=false;
    break;
    }
  }
  if(b) return true;
  
  for(int k=0;k<list.size();k++){
    if(list[k]<=0) return false;
  }
  
  return isExplodable(opone(list))||isExplodable(optwo(list));
}

vector<int> opone(vector<int> list){
  for(int i=0;i<list.size();i++){
    list[i]-=i+1;
  }
  return list;
}

vector<int> optwo(vector<int> list){
  for(int i=0;i<list.size();i++){
    list[i]-=list.size()-i;
  }
  return list;  
}
