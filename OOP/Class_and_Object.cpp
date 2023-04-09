#include<iostream>
#include<string>
using namespace std;
class Person               //the Class for Person is defined here
{
private:                //Private data members and methods are defined here
    string name;
    int id;

public:                //Public data members and methods are defined here
    void show_name()
    {
        cout<<name<<endl;
    }
};
int main()
{
    cout<<"Hello World!!"<<endl; //now the main function is working but there is no memory allocated for the object of type Person
    Person p1; //this is the Object of type Person...and now memory is allocated
    return 0;
}