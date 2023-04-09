#include<iostream>
#include<string>
using namespace std;
class Parent_class
{
protected:
    string p="hello";
public:
    void get_string()
    {
        cout<<p<<endl;
    }
    string get_string_val()
    {
        return p;
    }
};
class Child_class:protected Parent_class
{
private:
    string q="world";
public:
    void get_string()
    {
        cout<<p+q<<endl;
    }
};
int main()
{
    Child_class c_obj;
    c_obj.get_string();
    Parent_class p_obj;
    p_obj.get_string();
    return 0;
}