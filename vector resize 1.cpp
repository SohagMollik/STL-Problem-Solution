#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,a;
    vector<int>v;
    while(cin>>n){
        v.resize(n);
        for(a=0;a<n;a++){
            cin>>v[a];
        }
        for(a=0;a<n;a++){
            cout<<v[a]<<"\t";
        }
        cout<<endl;
    }
}
