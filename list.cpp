#include<bits/stdc++.h>
#include<list>
using namespace std;
int main ()
{
    list<double>li;
    list<double>:: iterator it;
    li.push_back(23.34);
    li.push_back(2.34);
    li.push_front(263.34);
    li.push_back(3.7);
    li.push_back(23.34);
    li.push_back(87.384);
    li.push_front(23.34);
    li.push_back(23.34);
    li.push_back(65.32);
    li.push_front(98.34);
    li.push_back(5.34);
    li.push_back(293.34);
    li.push_back(12.34);
    li.push_back(45.334);
    li.push_back(67.384);
    li.push_back(43.304);
    li.push_front(43.305);
    sort(li.begin(),li.end());
    for(it=li.begin();it!=li.end();it++){
        cout<<*it<<endl;
    }

}
