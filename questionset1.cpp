#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<long long> candy;
    cout << "Enter the number of bags: ";
    int bags;
    cin >> bags;
    for (int i = 0; i < bags; i++)
    {
        cout << "Enter the no. of candies in bag " << i + 1 << ": ";
        long long num;
        cin>>num;
        candy.insert(num);
    }
    cout << "Enter the no of minutes: ";
    int time;
    cin >> time;
    int candies = 0;
    for (int i = 0; i < time; i++)
    {
        auto max = candy.end();
        max--;
        long long num;
        num = *max / 2;
        candies = candies + *max;
        candy.erase(max);
        candy.insert(num);
        cout<<candies<<endl;
    }
    cout<<"candies eaten: "<<candies<<endl;

    return 0;
}