#include<iostream>
#include<map>
using namespace std;
void display(map<string,int> &a)
{
    for(auto itr = a.begin(); itr != a.end(); itr++)
    {
        cout<<itr->first<<"\t"<<itr->second<<endl;
    }
}
int main()
{
    map<string,int> obj1; //map<key,value> name; //key and value datatypes
    obj1["Hasan"] = 2;
    obj1["Abbas"] = 3;
    obj1["Aqeel"] = 1;
    obj1.insert({"ali",3});
    cout<<obj1.size()<<endl;
    display(obj1);
    auto itr = obj1.find("Hasan");//Gives iterator for that pair using key to find it.
    cout<<endl;
    
    obj1.erase("ali");
    obj1.erase(itr);
    display(obj1);
    obj1.clear(); // clears the map


    //Maps stored values in order of key. String starts from A-Z and a-z. int numbers in asc; 
    //Inserting same key a different value overloads it.
    return 0;
}