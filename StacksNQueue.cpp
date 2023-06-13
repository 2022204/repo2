#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    stack<int> s;
    s.push(2);

    s.push(3);

    s.push(1);

    s.push(4);

    queue<int> q;
    q.push(2);

    q.push(3);

    q.push(1);

    q.push(4);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
