#include<iostream>
using namespace std;
template <class T1 = int, class T2 = float>
class A
{
    public:
    T1 a;
    T2 b;
    A(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
    }
};
int main()
{
    A<float, string> hasan(4.7,"asd");
    hasan.display();
    return 0;
}