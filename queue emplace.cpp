#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        q.push(a[i]);
    }
    q.emplace(8);
    cout<<q.front()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
