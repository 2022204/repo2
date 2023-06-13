#include<iostream>
#include<map>
#include<vector>
using namespace std;
void print(map<pair<string,string>, vector<int>> &m)
{
    for(auto itr = m.begin(); itr != m.end(); itr++)
    {
        cout<<"Name: "<<itr->first.first<<" "<<itr->first.second<<endl;
        cout<<"Marks\n";
        for(auto &element: itr->second)
        {
            cout<<element<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    map<pair<string,string>,vector<int>> m;
    //All those datatypes that can be compared can be used as Key.
    while(true)
    {
        string fn, ln;
        int marks,num;
        cout<<"Enter first Name: ";
        cin>>fn;
        cout<<"Enter last name: ";
        cin>>ln;
        cout<<"Enter number of subjects: ";
        cin>>num;
        vector<int>v;
        for(int i = 0; i < num; i++)
        {
            cout<<"Enter marks("<<i+1<<"): ";
            cin>>marks;
            v.push_back(marks);
        }
        m[{fn,ln}] = v;
        cout<<"Do you want to add more\n ";
        int opt;
        cout<<"(1)Yes\t(2)No"<<endl;
        cin>>opt;
        if(opt == 2)
        {
            break;
        }
    }
    print(m);
    return 0;
}