#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main ()
{

    map<string,int>m;
    map<string,int>:: iterator it;
    m.insert(make_pair("sohag",46));
    m.insert(make_pair("sagor",25));
    m.insert(make_pair("aniks",48));
    m.insert(make_pair("zihad",04));
    m.insert(make_pair("rasel",18));
    m.insert(make_pair("sohib",45));
    cout<<"Name"<<"  "<<"Id"<<endl;
    cout<<endl;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
