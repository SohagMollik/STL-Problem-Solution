#include<bits/stdc++.h>
#include<vector>
#include<iterator>

using namespace std;
int main ()
{
    vector<int>vec;
    vector<int>::iterator it;
    for(int i=1;i<10;i++){
     cin>>vec.push_back(i);

    }
    for(int i=0;i<vec.size();i+=2){
        cout<<vec[i]<<"\t"<<endl;
    }
    for(it=vec.begin();it<vec.end();it=it+2){

        cout<<*it<<"\t";
    }
}
