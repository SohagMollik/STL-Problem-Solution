#include<bits/stdc++.h>
#include<set>
#include<iterator>
using namespace std;
int main()
{

    set<int>s;
    set<int>:: iterator it;

        s.insert(5);
        s.insert(45);
        s.insert(15);
        s.insert(75);
        s.insert(56);
        s.insert(5);
        s.insert(5);

    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
