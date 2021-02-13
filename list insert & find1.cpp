#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main ()
{
    int n,s,t,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    list<int>li(a,a+n);
    list<int>:: iterator it;
    cout<<"enter place"<<endl;
    cin>>s;
    it=find(li.begin(),li.end(),s);
    if(it==li.end()){
        cout<<"the element is not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
        cout<<"enter your value"<<endl;
        cin>>t;
        li.insert(it,t);
        for(it=li.begin();it!=li.end();it++)
           cout<<*it<<"\t";
           cout<<endl;

        li.reverse();
        for(it=li.begin();it!=li.end();it++)
           cout<<*it<<"\t";
    }

}
