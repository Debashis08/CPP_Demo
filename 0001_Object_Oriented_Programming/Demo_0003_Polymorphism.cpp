#include<bits/stdc++.h>
using namespace std;
//Polymorphism of two types
//Compile Time Polymorphism
//          1. Function Overloading
//          2. Operator Overloading
//Run Time Polymorphism
//          1.Virtual Functions or Function Overriding

//Function Overloading
class CompileTimePolymorphism1
{
public:
    void AddValues(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void AddValues(double a,double b)
    {
        cout<<a+b<<endl;
    }
};

//Operator Overloading
class CompileTimePolymorphism2
{
private:
    int x;
    int y;
public:
    CompileTimePolymorphism2()
    {
        //Default constructor
    }
    CompileTimePolymorphism2(int a,int b)
    {
        this->x=a;
        this->y=b;
    }
    void PrintComplexNumber()
    {
        cout<<x<<"+"<<y<<"j"<<endl;
    }
    CompileTimePolymorphism2 operator+(CompileTimePolymorphism2 obj)
    {
        CompileTimePolymorphism2 res;
        res.x=x+obj.x;
        res.y=y+obj.y;
        return res;
    }
};

//Virtual Fucnctions or Function Overriding
class RunTimePolymorphism
{
private:

public:
    virtual void ShowFunction1()
    {
        cout<<"Base class Show Function 1"<<endl;
    }
    void ShowFunction2()
    {
        cout<<"Base class Show Function 2"<<endl;
    }
};
class DerivedRunTimePolymorphism:public RunTimePolymorphism
{
public:
    void ShowFunction1()
    {
        cout<<"Derived class Show Function 1"<<endl;
    }
    void ShowFunction2()
    {
        cout<<"Derived class Show Function 2"<<endl;
    }
};
int main()
{
    CompileTimePolymorphism1 cmp1;
    cmp1.AddValues(4,5);
    cmp1.AddValues(4.5,6.7);


    CompileTimePolymorphism2 cmp2a(3,4),cmp2b(4,5);
    cmp2a.PrintComplexNumber();
    cmp2b.PrintComplexNumber();

    CompileTimePolymorphism2 cmp3;
    cmp3=cmp2a+cmp2b;
    cmp3.PrintComplexNumber();



    RunTimePolymorphism rmp1;
    RunTimePolymorphism* rmp2;
    DerivedRunTimePolymorphism rmp3;
    DerivedRunTimePolymorphism rmp4;
    rmp2=&rmp4;

    rmp1.ShowFunction1();
    rmp1.ShowFunction2();

    rmp2->ShowFunction1();
    rmp2->ShowFunction2();

    rmp4.ShowFunction1();
    rmp4.ShowFunction2();
}