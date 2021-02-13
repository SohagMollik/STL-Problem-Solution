#include<bits/stdc++.h>
#include<bitset>
#define size 5
using namespace std;
int main ()
{
    bitset<size>b(string("00011"));
    bitset<size>b1(string("11011"));
    cout<<b<<endl;
    cout<<b.count()<<endl;/*count function count number of 1*/

    if(b.none())/*none function is true when all elementes are 0*/
        cout<<"true"<<endl;
    else
            cout<<"false"<<endl;
           //cout<< b.flip()<<endl;/*0 convert 1 & 1 convert 0*/

    b=b<<2;/*left shift*/
    cout<<b<<endl;
    b1=b1>>2;/*right shift*/
    cout<<b1<<endl;


}
