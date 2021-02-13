#include <iostream>
#include <vector>
#include<iterator>
#include<algorithm>
using namespace std;
bool fnc(int a,int b){
  return a>b;
}

int main () {
   int n,j;
   cin>>n;
   int a[n];
   for(j=0;j<n;j++)
    cin>>a[j];
   vector<int>fifth(a,a+sizeof(a)/sizeof(int));
   vector<int>:: iterator it;

    cout << "The contents of fifth are:";
    for (int i=0; i < fifth.size(); i++)
        cout << " " << fifth[i];
        cout<<endl;
        cout<<endl;
        cout<<endl;
        sort(fifth.begin(),fifth.end());
        cout<<"assending sort is"<<endl;
        for(it=fifth.begin();it!=fifth.end();it++)
            cout<<*it<<endl;
   sort(fifth.begin(),fifth.end(),fnc);
        cout<<"decending sort is"<<endl;
        for(it=fifth.begin();it!=fifth.end();it++)
            cout<<*it<<endl;

    return 0;
}

