#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
   T * arr;
   int size;
   public:
   vector(int m)
   {
    size = m;
    arr = new T[size];
   }
   T dotProduct(const vector <T> & v)
   {
    T d = 0;
    for(int i = 0; i < size; i++)
    {
        d += arr[i] * v.arr[i];
    }
   }
};
int main()
{
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector<float>v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    //Error here
    float a = v1.dotProduct(v2);
    //
    cout << a << endl;
    return 0;
}