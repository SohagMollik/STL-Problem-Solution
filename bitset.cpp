#include<bits/stdc++.h>
#include<bitset>
#define sohag 10
using namespace std;
int main()
{

    bitset<sohag>b(string("1101"));
    cout<<b<<endl;
    cout<<b[2]<<endl;

    cout<<b.set()<<endl;
    cout<<b.reset()<<endl;
    cout<<b.size()<<endl;
    cout<<endl;
    cout<<endl;
    bitset<sohag>b1(100);

    cout<<b1<<endl;
    cout<<b1[2]<<endl;

    cout<<b1.set()<<endl;
    cout<<b1.reset()<<endl;
    cout<<b1.size()<<endl;
}
