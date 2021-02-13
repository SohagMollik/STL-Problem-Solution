#include<bits/stdc++.h>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main ()
{
    int n,i,t;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    list<int>li(a,a+n);
    list<int>:: iterator it;
    cout<<"enter find element"<<endl;
    cin>>t;
    it=find(li.begin(),li.end(),t);
    if(it==li.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<*it<<" "<<"found"<<endl;
    }
}
