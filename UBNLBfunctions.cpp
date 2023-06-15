#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n = 5;
    int a[n] = {1,2,4,5,10};
    sort(a, a+n);
    cout<<endl;
    int *ptr = lower_bound(a, a+n, 3);   //Returns the address of given number
    int *ptr1 = upper_bound(a, a+n, 3);  //Returns the address of next number greater than given number
    cout<<*ptr<<endl;
    cout<<*ptr1<<endl;

    return 0;
}