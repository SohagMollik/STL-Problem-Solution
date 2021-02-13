#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<int,string>m;
    map<int,string>:: iterator it;
    m.insert(make_pair(46,"sohag"));
    m.insert(make_pair(25,"sagor"));
    m.insert(make_pair(4,"zihad"));
    m.insert(make_pair(48,"anik"));
    m.insert(make_pair(18,"rasel"));
    m.insert(make_pair(25,"oni"));
    //m.insert(make_pair(29,"shangkor"));
    m[29]="shangkor";
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
