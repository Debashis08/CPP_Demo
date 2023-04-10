#include<bits/stdc++.h>
using namespace std;
class Person
{
private:
    int Id;
    string FirsName;
    string LastName;
public:
    Person(int id,string fname,string lname)
    {
        this->Id=id;
        this->FirsName=fname;
        this->LastName=lname;
    }
    void Show_Details()
    {
        cout<<"The Id of the person is "<<this->Id<<endl;
        cout<<"The full name of the person is "<<this->FirsName<<" "<<this->LastName<<endl;
    }
};
int main()
{
    Person* p1=new Person(1,"ecbe","edgf");
    p1->Show_Details();
    Person p2(2,"abc","def");
    p2.Show_Details();
    return 0;
}