#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
bool fnc(int a,int b)
{
    return a>b;
}
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    vec.push_back(45);
    vec.push_back(4);
    vec.push_back(495);
    vec.push_back(5);
    vec.push_back(21);
    vec.push_back(9);
    vec.push_back(34);
    vec.push_back(4);
    vec.push_back(7);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(667);
    vec.push_back(45);
    vec.push_back(48);
    vec.push_back(455);
    vec.push_back(450);
    sort(vec.begin(),vec.end());
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
     sort(vec.begin(),vec.end(),fnc);
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<endl;
    }

}

