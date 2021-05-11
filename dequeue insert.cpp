#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define mod   1000000007
#define pi    acos(-1.0)
#define yes   cout<<"YES\n";
#define no    cout<<"NO\n";
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int n;
    cin>>n;
    int a[n];
     deque<int>d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        d.pb(a[i]);
    }
    //d.assign(a,a+n);
    auto it=d.begin()+1;
    d.insert(it,2,100);
    cout<<d.size()<<endl;
    for(auto&x: d){
        cout<<x<<" ";
    }

    return 0;
}
