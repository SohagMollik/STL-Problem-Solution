#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    vec.push_back(45);
    vec.push_back(495);
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(45);
    vec.push_back(34);
    vec.push_back(453);
    vec.push_back(12);
    vec.push_back(344);
    vec.push_back(4235);
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
        vector<int>vec;

    vec.reverse();
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<endl;
}

