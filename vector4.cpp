#include<bits/stdc++.h>
#include<vector>
 #include<iterator>
using namespace std;
int main()
{
    int n;
    cin>>n;
  vector<int>vec;
  vector<int>::iterator it;
  for(int i=1;i<=n;i++)
  {
      cin>>vec.push_back(i);
  }
  for(int i=1;i<=vec.size();i++)
  {
      cout<<vec[i]<<endl;
  }
  it=vec.begin();
  cout<<*it<<endl;

}
