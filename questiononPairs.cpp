#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(pair<int,int> p1, pair<int,int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int arr[10] = {3,5,8,2,4,10,23,1,7,11};
    vector<pair<int,int>> v;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        v.push_back({arr[i],i});
    }
    sort(v.begin(), v.end(), compare);
    for(int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i + 1;
    }
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
    return 0;
}