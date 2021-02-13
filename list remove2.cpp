#include<bits/stdc++.h>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main ()
{
    int n,i,r;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    list<int>li(a,a+n);
    list<int>:: iterator it;
    cout<<"enter remove element"<<endl;
    cin>>r;
    it=find(li.begin(),li.end(),r);
    if(it==li.end())
        cout<<"not found"<<endl;
    else{
        li.erase(it);
        for(it=li.begin();it!=li.end();it++){
            cout<<*it<<"\t";
        }
    }
}
