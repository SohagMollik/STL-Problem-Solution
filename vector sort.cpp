#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
 using namespace std;
 bool fnc(int a,int b){
     return a>b;
 }
 int main()
 {
   vector<int>vec;
   vector<int>::iterator it;
   vec.push_back(45);
   vec.push_back(457);
   vec.push_back(745);
   vec.push_back(5);
   vec.push_back(4);
   vec.push_back(23);
   vec.push_back(12);
   vec.push_back(58);
   vec.push_back(88);
   vec.push_back(43);
   vec.push_back(8);
   vec.push_back(1);
   vec.push_back(657);
   vec.push_back(8787);
   sort(vec.begin(),vec.begin()+5,fnc);
   for(it=vec.begin();it!=vec.end();it++){
    cout<<*it<<endl;
   }
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<endl;
    sort(vec.begin(),vec.begin());
   for(it=vec.begin();it!=vec.end();it++){
    cout<<*it<<endl;
   }
 }
