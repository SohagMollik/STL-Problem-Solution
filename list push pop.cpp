#include<bits/stdc++.h>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main ()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    list<int>li(a,a+n);
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;
    cout<<endl;
    li.pop_front();
    li.pop_back();
    li.pop_front();
    li.pop_back();
    for(it=li.begin();it!=li.end();it++){
        cout<<*it<<"\t";
    }
        cout<<endl;
        cout<<endl;
    li.push_front(5);
    li.push_back(8);
    for(it=li.begin();it!=li.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;
    cout<<endl;

     li.sort();
    for(it=li.begin();it!=li.end();it++){
        cout<<*it<<"\t";
    }
}
