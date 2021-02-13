#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
int main ()
{
 int n,i,s,t;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++){
    cin>>a[i];
 }
 vector<int>v(a,a+n);
 vector<int>:: iterator it;
 vector<int>:: iterator it1;
 cout<<"enter number"<<endl;
 cin>>s;
  sort(v.begin(),v.end());
for(it=v.begin();it!=v.end();it++){
    cout<<*it<<"\t";
}
cout<<endl;
 it=lower_bound(v.begin(),v.end(),s);
 if(*it!=s)
    cout<<"not found"<<endl;
 else{
    cout<<"found"<<endl;
    cout<<distance(v.begin(),it)<<endl;
 }



  cout<<"enter number"<<endl;
 cin>>t;
cout<<endl;
 it1=upper_bound(v.begin(),v.end(),t);
 if(*it1!=t)
    cout<<"not found"<<endl;
 else{
    cout<<"found"<<endl;
    cout<<distance(v.begin(),it1)<<endl;
 }
}
