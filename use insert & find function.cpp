#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int n,s,t;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    list<int>li(a,a+n);
    list<int>:: iterator it;
    cout<<"enter search number"<<endl;
    cin>>s;
    it=find(li.begin(),li.end(),s);
    cout<<"enter input number"<<endl;
      cin>>t;
    li.insert(it,t);
    for(it=li.begin();it!=li.end();it++)
        cout<<*it<<"\t";
    cout<<endl;
    li.reverse();
        for(it=li.begin();it!=li.end();it++)
        cout<<*it<<"\t";
            cout<<endl;
            li.sort(li.begin(),li.end());
            for(it=li.begin();it!=li.end();it++)
        cout<<*it<<"\t";
            cout<<endl;
            li.clear();
       for(it=li.begin();it!=li.end();it++)
        cout<<*it<<"\t";
        cout<<endl;
        cout<<li.size()<<endl;


}
