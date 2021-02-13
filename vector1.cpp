#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main ()
{
 int a[6];
 vector<int>vec;
 vec.push_back(10);
 vec.push_back(20);
 vec.push_back(40);
 vec.push_back(70);
 vec.push_back(90);
 vec.push_back(50);
 cout<<vec.size()<<endl;
 for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<endl;
 }
 return 0;
}
