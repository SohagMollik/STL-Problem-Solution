#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<list>
using namespace std;
int main ()
{
  int n,i;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  vector<int>vec(a,a+sizeof(a)/sizeof(int));
  vector<int>::iterator it;

   for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
     list<int>li(a,a+sizeof(a)/sizeof(int));
     list<int>::iterator it1;

     for(it1=li.begin();it1!=li.end();it1++)
        cout<<*it1<<endl;

}

