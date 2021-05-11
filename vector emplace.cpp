#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     vector<int>v(a,a+n);
     auto it=v.emplace(v.begin()+2,300);
     v.emplace(it,100);
     v.emplace(v.end()-2,500);
     for(auto& x: v)cout<<x<<" ";
     cout<<endl;
}
