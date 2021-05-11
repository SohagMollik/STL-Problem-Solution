#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*queue<int>x,y;
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        x.push(a[i]);

    }
    for(int i=0;i<n;i++){
        cin>>b[i];
     y.push(b[i]);
    }
    cout<<endl;
    x.swap(y);
    while(!x.empty()){
    cout<<x.front()<<" ";
    x.pop();
   }
   cout<<endl;
   while(!y.empty()){
    cout<<y.front()<<" ";
    y.pop();
   }*/
   queue<string>x,y;
   int n;
   cin>>n;
   while(n--){
    string s,s1;
    cin>>s>>s1;
    x.push(s);
    y.push(s1);
   }

   x.swap(y);
   cout<<endl;
   while(!y.empty()){
    cout<<y.front()<<" ";
    y.pop();
   }
}
