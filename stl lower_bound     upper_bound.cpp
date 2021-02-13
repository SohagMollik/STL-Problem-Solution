#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int mian ()
{
    int n,i,s;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v(a,a+n);
    vector<int>:: iterator it;
    cout<<"enter search element"<<endl;
    cin>>s;
      it=lower_bound(v.begin(),v.end(),s);
    if(it!=v.end()){
        cout<<*it<<endl;
        cout<<distance(v.begin(),it)<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}
