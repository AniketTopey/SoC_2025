#include <iostream>
#include<string>

using namespace std;

int main() {

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<< ((n==1 || (n==2 && s[0]!=s[1])) ? "YES" : "NO") << endl;
  }
  
  return 0;

}
