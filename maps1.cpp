// Maps in c++
/*
    It is used to store things into key value pairs
    like
    Hasan   138
    Abbas   234
    Ali     123
    Names are mapped to number


    //Finds methods in for syntax and documentations cppreference.com
*/
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> marksMap;
    marksMap["Hasan"] = 98;
    marksMap["Ali"] = 23;
    marksMap["Abbas"] = 34;
    map<string, int>::iterator itr; //use of iterators...
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<"\n";
    }
    cout<<endl;
    marksMap.insert({"Asghar", 198});
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<"\n";
    }
    cout<<endl<<"Marks size is "<<marksMap.size()<<endl;
    return 0;
}