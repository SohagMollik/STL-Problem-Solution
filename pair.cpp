#include<bits/stdc++.h>
#include<utility>
#include<vector>
#include<iterator>
using namespace std;
int main()
{

    vector<pair<int,string> >v;
    vector<pair<int,string> >::iterator it;

        v.push_back(make_pair(46,"sohag"));
        v.push_back(make_pair(4,"zihad"));
        v.push_back(make_pair(48,"anik"));
        v.push_back(make_pair(25,"sagor"));
        cout<<v[0].second<<endl;
        for(it=v.begin();it!=v.end();it++){
            cout<<it->first<<" "<<it->second<<endl;
        }


}

