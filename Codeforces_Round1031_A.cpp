#include <iostream>
using namespace std;

int main() {
  int tc;
  cin>>tc;
  while(tc--){
    int k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;
    
    int mindrop = min(x,y);
    int maxdrop = max(x,y);
    int lowt = min(a,b);
    int hight = max(a,b);
    int shashliks=0;
    int lowtdrop = ((lowt == a)?(x):(y));
    
  
    if(lowt>=k) {
      cout<< ((lowt==k)?("1"):("0")) <<endl; 
      continue;
    }
    
    if(hight<=k){
      shashliks+= ((k-hight)/mindrop)+1;
      int finalpos = k- ((shashliks)*(mindrop));
      if(finalpos>=lowt){
        shashliks+=((finalpos-lowt)/lowtdrop) +1;
        cout<<shashliks<<endl;
      }
      else cout<<shashliks<<endl;
      continue;
    }
    
    shashliks += ((k-lowt)/lowtdrop) + 1;
    cout<<shashliks<<endl;
    
  }
  
  return 0;

}
