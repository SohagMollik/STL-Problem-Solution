#include<bits/stdc++.h>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main ()
{
    int n,i,s;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    list<int>li(a,a+n);
    list<int>:: iterator it;
    li.sort();
    cout<<"search number"<<endl;
    cin>>s;
     it=find(li.begin(),li.end(),s);
    if(it!=li.end()){
        cout<<"yes"<<endl;
        cout<<distance(li.begin(),it)<<endl;
    }
       else
        cout<<"no"<<endl;

}
