#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    // int age,height;
    // string Name;
    // student(string nam,int a,int b)
    // {
    //     Name=nam;
    //     age=a;
    //     height=b;
    //     cout<<"Parameterized"<<endl;
    // }
    // void output()
    // {
    //     cout<<name<<endl;
    //     cout<<age<<endl;
    //     cout<<height<<endl;
    // }
    // student()
    // {
    //     cout<<"Default"<<endl;
    // }
    // student(student &a)
    // {
    //     cout<<"Copy constructors"<<endl;
    //     name=a.name;
    //     age=a.age;
    //     height=a.height;
    // }
    // ~student()
    // {
    //     cout<<"Destructor"<<endl;
    // }
    double GPA;
    public:
    string name;
    string regNo;
    string grade[3];
    void output(string* arr,int num,double gpa)
    {
        cout<<"Name: "<<name<<"\t\tRegNo: "<<regNo<<endl;
        for(int i=0;i<num;i++)
        {
            cout<<"Grades in "<<arr[i]<<": "<<grade[i]<<endl;
        }
        GPA=gpa;
        cout<<"Your GPA is "<<GPA<<endl;
    }
};
int main()
{
    // student a("hasan",19,60);
    // a.output();
    // student b;
    // student c=a;
    // c.output();

    student arr[5];
    string array[3]={"MT101","CS101","PH101"};
    for(int i=0;i<5;i++)
    {
    cout<<"Enter name: ";
    cin>>arr[i].name;
    cout<<"Enter RegNo: ";
    cin>>arr[i].regNo;
    for(int j=0;j<3;j++)
    {
    cout<<"Enter grade in "<<array[j]<<": ";
    cin>>arr[i].grade[j];
    }
    }
    cout<<"The results are below"<<endl;
    for(int i=0;i<5;i++)
    {
        double Qp,Gpa,sum=0;
        int Ch;
        for(int j=0;j<3;j++)
        {
            if(array[j]=="MT101")
            Ch=3;
            else if(array[j]=="CS101")
            Ch=2;
            else if(array[j]=="PH101")
            Ch=3;
            }
            for(int j=0;j<3;j++)
        {
        if(arr[i].grade[j]=="A+"||arr[i].grade[j]=="A")
        Qp=4;
        else if(arr[i].grade[j]=="A-")
        Qp=3.7;
        else if(arr[i].grade[j]=="B+")
        Qp=3.3;
        else if(arr[i].grade[j]=="B")
        Qp=3;
        else if(arr[i].grade[j]=="B-")
        Qp=2.7;
        else if(arr[i].grade[j]=="C+")
        Qp=2.3;
        else if(arr[i].grade[j]=="C")
        Qp=2;
        else if(arr[i].grade[j]=="C-")
        Qp=1.7;
        else if(arr[i].grade[j]=="D+")
        Qp=1.3;
        else if(arr[i].grade[j]=="D")
        Qp=1;
        else
        Qp=0;
        sum=sum+Qp*Ch;
        }
        Gpa=sum/8;
         arr[i].output(array,3,Gpa);
     }
    return 0;
}