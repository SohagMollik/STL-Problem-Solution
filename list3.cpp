#include<bits/stdc++.h>
#include<string>
#include<queue>
#include<list>
#include<iterator>
#include<stdio.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    list<int>li(a,a+n);
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
        cout<<*it<<"\t";
        cout<<endl;
        cout<<li.size()<<endl;
        cout<<endl;
    li.reverse();
    for(it=li.begin();it!=li.end();it++)
        cout<<*it<<"\t";
        cout<<endl;
        li.clear();
        for(it=li.begin();it!=li.end();it++)
        cout<<*it<<"\t";
        cout<<endl;
        cout<<endl;

        cout<<li.size()<<endl;

}
