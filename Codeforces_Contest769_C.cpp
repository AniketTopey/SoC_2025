#include <iostream>

using namespace std;

int finalsteps(int a, int b);

int main() {
  
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    
    int minsteps=b-a;
    
    for(int x=0;x<=b-a;){
      
      for(int y=0;y<=b-a-x;y++){
        if(x+y+finalsteps(a+x,b+y)<minsteps) minsteps = x+y+finalsteps(a+x,b+y);
      }
      
      int toadd=1,curr_a=a+x;
      if(curr_a%2==1) {
        x+=1;
        continue;
      }
      else{
        int zeroes=0;
        while(curr_a%2==0) {
          curr_a>>=1;
          zeroes++;
        } 
        for(int i=0;i<zeroes;i++) toadd<<=1;
        x+=toadd;
      }
      
    }
    cout<<minsteps<<endl;
  }
  return 0;
}

int finalsteps(int a, int b){
  return ((a==b) ? (0) : ((a|b)-b+1));
}
