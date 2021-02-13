#include<bits/stdc++.h>
#include<map>
//#define pii map<string,int>
#define ff first
#define ss second
int main()
{
    map<string,int>m;
    cin>>m.ff>>m.ss;
     for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

}

