#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    int Id;
    string FirstName;
    string LastName;

    Person()
    {

    }
    Person(int id,string fname,string lname)
    {
        this->Id=id;
        this->FirstName=fname;
        this->LastName=lname;
    }
};
class Student:public Person
{
public:
    Student(int id,string fname,string lname)
    {
        this->Id=id;
        this->FirstName=fname;
        this->LastName=lname;
    }
};
class Employee:Person
{

};
int main()
{
    Student std(1,"ddf","dfdf");
    return 0;
}