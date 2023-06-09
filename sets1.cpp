#include<iostream>
#include<set>
using namespace std;
void print(multiset<string>&s)
{
    for(auto value:s)
    {
        cout<<value<<endl;
    }
    cout<<endl<<endl;
}
int main()
{
    cout<<"Sets"<<endl;
    /*
    sets are the "keys" part of maps.
    only stores unique elements
    stores in sorted order
    */

    multiset<string> s;
    s.insert("abc");
    s.insert("cba");
    s.insert("bac");
    auto it = s.find("abc");
    s.erase(it);
    print(s);
    s.insert("abc");
    print(s);
    s.erase("abc");
    print(s);

    return 0;
}