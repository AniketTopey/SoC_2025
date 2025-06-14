#include <iostream>

using namespace std;

int main() {
  
  int t;
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;
    n--;
    
    int p=1;
    
    while(n>=p){
      p*=2;
    }
    p/=2;
    
    for(int i=1;i<p;i++){
      cout<<i<<" ";
    }
    cout<<"0 "<<p<<" ";
    
    for(int i=p+1;i<=n;i++){
      cout<<i<<" ";
    }
    
    cout<<endl;
  }
   return 0;

}
