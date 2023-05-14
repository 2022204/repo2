#include<iostream>
using namespace std;
template <class T1, class T2>
class myClass
{
    public :
    T1 x;
    T2 y;
    void display()
    {
        cout<<this->x<<endl;
        cout<<this->y<<endl;
    }
};
int main()
{
    cout<<"Templates"<<endl;
    myClass<string,string> obj;
    obj.x = "Hasan";
    obj.y = "3";
    obj.display();
    return 0;
}