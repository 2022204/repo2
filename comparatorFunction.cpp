#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool should_i_swap(int a, int b)
{
    if(a > b)
    return true;
    else
    return false;
}
int main()
{
    int n = 5;
    vector<int>b;
    for(int i = 0; i  < n;i ++)
    {
        int a;
        cin>>a;
        b.push_back(a);
    }
    sort(b.begin(), b.end(), should_i_swap);
    for(auto a: b)
    {
        cout<<a<<"\t";
    }
    return 0;
}