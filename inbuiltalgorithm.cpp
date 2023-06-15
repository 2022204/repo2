#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    auto itr = min_element(v.begin(), v.end()); //returns (pointer) to min element
    cout<<*itr<<endl;
    itr = max_element(v.begin(), v.end());   //returns (pointer) to maximum element
    cout<<*itr<<endl;
    int num = accumulate(v.begin(), v.end(), 0);   //returns int/float the sum of all elements in array. takes initial sum as argument
    cout<<num<<endl;
    num = count(v.begin(), v.end(), 2); //returns (int) the number of times the element is present
    cout<<num<<endl;
    itr = find(v.begin(), v.end(), 2);     //returns pointer to the element. returns v.end() if not found
    cout<<*itr<<endl;

    reverse(v.begin(), v.end());            //Reverses the whole thing
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
    return 0;
}