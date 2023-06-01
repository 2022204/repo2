/*
    function object is a function wrapped into a class so that
    it is available like an object
*/

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 24, 3, 4, 55, 44, 32};
    sort(arr, arr + 7); 
    // Sorts the given array, arr + 7 means sort 7 animal. Also for
    //  decreasing u can just add another arguement. for descending it is greater<int>();
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    sort(arr, arr + 7 , greater<int>());
    for(auto c : arr)
    {
        cout<<c<<endl;
    }
    return 0;
}