#include <iostream>
using namespace std;
template <class T>
class Hasan
{
public:
    T data ;
    Hasan(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Hasan<T> :: display()
{
    cout<<data<<endl;
}
void func(int a)
{
    cout<<"I am first Func() "<<a<<endl;
}
template < class T>
void func(T a)
{
    cout<<"I am second Func() "<<a<<endl;
}

int main()
{
    // Hasan<float> h(5.7);
    // cout << h.data << endl;
    // h.display();
    func(4);
    func('c');
    return 0;
}