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
    queue<string>q;
    int n;
    cin>>n;
    while(q.size()<n){
        string s;
        cin>>s;
        q.push(s);
    }
    q.emplace("sohag");
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
