#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
 
using namespace std;
 
int main(){ 
  cout<<setprecision(20);
  
  vector<double> distances;
  vector<double> initial_list;
  int n,l;
  cin>>n>>l;
  
  for(int j=0;j<n;j++){
    int pos;
    cin>>pos;
    initial_list.push_back(pos);
  }
  sort(initial_list.begin(),initial_list.end());
  
  double front;
  double back=0;
  
  for(int i=0;i<n;i++){
    front=initial_list[i];
    distances.push_back(front-back);
    back=front;
  }
  distances.push_back(l-back);
  
  sort(distances.begin(),distances.end());
  
  double twod = distances[n];
  
  vector<double> lastlistipromise;
  
  lastlistipromise.push_back(twod/2);
  lastlistipromise.push_back(initial_list[0]-0);
  lastlistipromise.push_back(l-initial_list[n-1]);
  
  sort(lastlistipromise.begin(),lastlistipromise.end());
  
  cout<<lastlistipromise[2];
}