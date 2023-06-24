#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
bool is_positive(int x)
{
    return x > 0;
}
int main()
{
    //All of (returns true when all elements satisfy the condition) 
    //None of (returns true of all elements doesnt satisfy the condition)
    //any of (returns true if any one element satisfies the condition)
    //Lambda function (syntax)  ----->>>  [](parameters){return value;} 
    auto sum = [](int x, int y){return x+y;};  //Lambda function declared
    cout<<sum(2,3)<<endl;

    vector<int> v= {2,3,5};
    cout<<all_of(v.begin(), v.end(), [](int x){return x > 0;});         //returns true(1) if all of the elements satisfy the condition in lambda function
    cout<<all_of(v.begin(), v.end(), is_positive);

    return 0;
}