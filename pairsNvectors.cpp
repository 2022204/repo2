#include<iostream>
#include<vector>
using namespace std;

int main()
{
    pair<int,string> p;
    p = make_pair(2,"abc");
    cout<<p.first<<"\t"<<p.second<<endl;
    p = {2,"qwe"};
    cout<<p.first<<"\t"<<p.second<<endl;
    pair<int,string> &p1 = p;
    cout<<p1.first<<"\t"<<p1.second<<endl;

    //Usage of pairs
    //used to maitain a relation between two inputs

    int a[3] = {1,2,3};
    string b[3] = {"a","b","c"};

    pair<int,string> p_array[3];
    for(int i = 0; i < 3; i++)
    {
        p_array[i] = {a[i],b[i]};
    }
    swap(p_array[0] , p_array[2]);
    for(int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<"\t"<<p_array[i].second<<endl;
    }

    vector<pair<int,string>> v;
    //vector of pairs ....
    for(int i = 0; i < 3; i++){
    v.push_back(p_array[i]);
    }
    return 0;
}