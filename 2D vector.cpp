#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
int main ()
{
    vector<vector <int> > vec;
    vector<int>temp;
    for(int i=0;i<9;i++){
        for(int j=0;j<=i;j++){
            temp.push_back(i);
        }
        vec.push_back(temp);
    }
    vector<vector <int> >:: iterator it;
    vector<int>:: iterator it1;
    for(it=vec.begin();it!=vec.end();it++){
        for(it1=it->begin();it1!=it->end();it1++){
            cout<<*it1<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<"\t";
        }
        cout<<endl;
    }

}
