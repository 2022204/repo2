#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
int main()
{
    map<int, multiset<string>> m;

    cout<<"Enter the number of students: ";
    int num;
    cin>>num;

    for(int i = 0; i < num; i++)
    {
        cout<<"Enter name: ";
        string name;
        cin>>name;

        cout<<"Enter marks: ";
        int marks;
        cin>>marks;
        m[marks * -1].insert(name);      
    }

    for(auto &itr : m)
    {
        auto &s = itr.second;
        int marks = itr.first;
        for(auto student: s)
        {
            cout<<student<<" "<<marks *-1<<endl;
        }
    }

    return 0;
}