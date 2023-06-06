#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>m;
    cout<<"Enter size"<<endl;
    int size;
    cin>>size;
    for(int i = 0; i < size; i++)
    {
        string s;
        cout<<"Enter string: ";
        cin>>s;
        m[s]++;
    }
    for(auto c:m)
    {
        cout<<c.first<<"\t"<<c.second<<endl;
    }
}