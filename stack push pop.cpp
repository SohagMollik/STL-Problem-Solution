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
    int a[n],b[n];
    stack<int>st,x;
    st.emplace(12);
    for(int i=0;i<n;i++){
        cin>>a[i];
        st.push(a[i]);
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        x.push(b[i]);
    }
 //st.emplace(15);
 st.swap(x);
 cout<<st.size()<<endl;
 cout<<x.size()<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
     while(!x.empty()){
        cout<<x.top()<<" ";
        x.pop();
    }
    return 0;
}
