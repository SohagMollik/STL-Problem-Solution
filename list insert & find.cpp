#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
int main ()
{
    int i,n,s,t;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>vec(a,a+n);
    vector<int>:: iterator it;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;
    cout<<endl;
    cout<<"enter place"<<endl;
    cin>>s;
    it=find(vec.begin(),vec.end(),s);
    cout<<"enter value"<<endl;
    cin>>t;
    vec.insert(it,t);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    reverse(vec.begin(),vec.end());
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<"\t";
    }

}

