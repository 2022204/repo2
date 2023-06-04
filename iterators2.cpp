#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    vector<int>::iterator itr; // Acts as a pointer for STL containers. USeful when using maps and etc
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << "\t";
    }
    cout << endl;

    // Or using auto keyword

    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << "\t";
    }
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    display(v);
    return 0;
}