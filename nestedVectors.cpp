#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector of pairs
    vector<pair<int,int>> v = {{1,2},{2,3}};
    v.push_back({1,5});

    //vector of vectors
    vector<vector<int>> v1;

    //array of 3 vectors
    vector<int> v2[3];

    //pair of vectors
    pair<vector<int>, vector<string>> p;
    
    return 0;
}