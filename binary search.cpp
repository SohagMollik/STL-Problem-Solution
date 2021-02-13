#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  cout<<"enter search number"<<endl;
  cin>>f;
   vector<int>:: iterator it=(v.begin(),v.end(),f);
  bool ans= binary_search(v.begin(),v.end(),it);
  if(ans)cout<<"Found\n";
  else cout<<"Not found\n";
}
