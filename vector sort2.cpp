#include<bits/stdc++.h>
#include<vector>
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
    vector<int>v(a,a+n);
    vector<int>:: iterator it;
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<"\t";
    }
        cout<<endl;
    cout<<endl;

    v.pop_back();
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;
    v.push_back(5);
   for(it=v.begin();it!=v.end();it++){
        cout<<*it<<"\t";
    }
}
