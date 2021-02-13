#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>p;
    p.push(23);
    p.push(203);
    p.push(2);
    p.push(45);
    p.push(323);
    p.push(523);
    p.push(123);
    while(!p.empty())
    {
        int x=p.top();
        cout<<x<<endl;
        p.pop();
    }
    priority_queue<string>q;
    q.push("sohag");
    q.push("sagore");
    q.push("satodal");
    q.push("anik");
    q.push("zihad");
    q.push("oni");
     while(!q.empty())
    {
        string x=q.top();
        cout<<x<<endl;
        q.pop();
    }

}
