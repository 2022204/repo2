#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
    map<int, multiset<string>> m;
    cout<<"Enter Number of student: ";
    int num;
    cin>>num;
    for(int i = 0; i < num; i++)
    {
        string name;
        int marks;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
        m[marks * -1].insert(name);
    }
    for(auto &itr: m)
    {
        auto &name = itr.second;
        int marks = itr.first;
        for(auto student: name)
        {
            cout<<student<<" "<<marks*-1<<endl;
        }
    }
    return 0;
}