#include <iostream>

using namespace std;

int main(){
  int t;
  cin>>t;
  
  for(int i=0; i<t; i++){
    int n;
    cin>>n;
    
    int num=2;
    
    for(int j=0;j<n-2;j++){
      cout<<num<<" ";
      num++;
    }
    cout<<n<<" 1"<<endl;
    
  }
  return 0;
}
