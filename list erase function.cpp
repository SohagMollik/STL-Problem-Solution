#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,i,s;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    list<int>li(a,a+n);
    vector<int>v(a,a+n);
    list<int>:: iterator it;
    vector<int>:: iterator it1;
    cout<<"enter remove element"<<endl;
    cin>>s;
    it=find(li.begin(),li.end(),s);
    if(it==li.end()){
        cout<<"not found"<<endl;
    }
    else{
        li.erase(it);
        for(it=li.begin();it!=li.end();it++){
            cout<<*it<<"\t";
        }
        cout<<endl;
        cout<<endl;
         li.sort();
        for(it=li.begin();it!=li.end();it++){
            cout<<*it<<"\t";
        }
    }
    //using vector
    cout<<endl;
    cout<<endl;
 cout<<"enter remove element"<<endl;
    cin>>s;
    it1=find(v.begin(),v.end(),s);
    if(it1==v.end()){
        cout<<"not found"<<endl;
    }
    else{
        v.erase(it1);
        for(it1=v.begin();it1!=v.end();it1++){
            cout<<*it<<"\t";
        }
        cout<<endl;
        cout<<endl;
        sort(v.begin(),v.end());
        for(it1=v.begin();it1!=v.end();it1++){
            cout<<*it1<<"\t";
        }
    }

}
