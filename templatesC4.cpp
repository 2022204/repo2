#include<iostream>
using namespace std;
// float function(int a, int b)
// {
//     float avg = (a + b)/2;
//     return avg;
// }
template<class T1, class T2>
float function(T1 a, T2 b)
{
    return (a+b)/2;
}
int main()
{
    cout<<"Function Template"<<endl;
    cout<<function(3.0,4)<<endl;
    float a = function(3,5);
    printf("The average is %.2f", a);
    return 0;
}