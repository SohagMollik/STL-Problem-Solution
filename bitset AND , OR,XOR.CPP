#include<bits/stdc++.h>
#include<bitset>
#define size 5;
using namespace std;
int main()
{
    bitset<size>a(string("00110"));
    bitset<size>b(string("11010"));
    cout<< a & b <<endl;
    cout<< a | b <<endl;
    cout<< a ^ b <<endl;
}
