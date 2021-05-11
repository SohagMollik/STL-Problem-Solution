#include<bits/stdc++.h>
using namespace std;
int main()
{
   /*queue<int>q;
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    int x=a[i];
    q.push(x);

   }
   //q.back()-=q.front();
   // back() operation return last element of the queue.
   cout<<q.back()<<endl;
   while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
   cout<<endl;*/
   queue<string>q;
   int n;
   cin>>n;
   while(n--)
   {
       string s;
       cin>>s;
       q.push(s);

   }
   cout<<endl;
   cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }

   cout<<endl;
}
