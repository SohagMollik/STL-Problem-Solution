#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main ()
{
  int n,i,s,s1;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  vector<int>v(a,a+n);
  vector<int>:: iterator it;
  vector<int>:: iterator it1;

  //lower_bound

  cout<<"enter number"<<endl;
  cin>>s;
   it=lower_bound(v.begin(),v.end(),s);

  if(*it!=s){
        cout<<s<<" "<<"not found"<<endl;
  }
   else
    {
    cout<<*it<<" "<<"found"<<endl;
    cout<<distance(v.begin(),it)<<endl;
  }

  //upper_bound

  cout<<"enter number"<<endl;
  cin>>s1;
   it1=upper_bound(v.begin(),v.end(),s1);

  if(*it1!=s1){
        cout<<s1<<" "<<"not found"<<endl;
  }
   else
    {
    cout<<*it1<<" "<<"found"<<endl;
    cout<<distance(v.begin(),it1)<<endl;
  }


}
