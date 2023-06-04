#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> &v)
{
    vector<int>:: iterator itr;  //Acts as a pointer for STL containers. USeful when using maps and etc 
    for(itr = v.begin(); itr != v.end(); itr++)
    {
        cout<<*itr<<"\t";
    }   
    cout<<endl;
}
int main()
{
    vector<int> v={1,2,3,4};
    display(v);
    return 0;
}