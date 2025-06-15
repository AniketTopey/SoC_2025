#include <iostream>
using namespace std;

int main() {
  int tc;
  cin>>tc;
  while(tc--){
    int w,h,a,b;
    cin>>w>>h>>a>>b;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
    int xdiff = max(x1,x2)-(min(x1,x2)+a);
    int ydiff = max(y1,y2)-(min(y1,y2)+b);
    
    if(xdiff<0){
      if(ydiff%b==0){
        cout<<"YES"<<endl;
        continue;
      }
      else{
        cout<<"NO"<<endl;
        continue;
      }
    }  
    
    if(ydiff<0){
      if(xdiff%a==0){
        cout<<"YES"<<endl;
        continue;
      }
      else{
        cout<<"NO"<<endl;
        continue;
      }
    }
    
    if(xdiff==0 || ydiff==0){
      cout<<"YES"<<endl;
      continue;
    }
    
    if(xdiff%a==0 || ydiff%b==0){
      cout<<"YES"<<endl;
      continue;
    }
    
    cout<<"NO"<<endl;
      
  }
  return 0;

}
