#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
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
    list<int>:: iterator it;
    li.pop_front();
    li.pop_back();
    li.pop_front();
    li.pop_back();
    for(it=li.begin();it!=li.end();it++){
        cout<<*it<<"\t";
    }
}
