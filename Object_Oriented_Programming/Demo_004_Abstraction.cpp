#include<bits/stdc++.h>
using namespace std;
//Some interesting facts about abstract class in CPP
class Abstraction   //1.A class is abstract if it has at least one pure virtual function. 
{
protected:
    int val;
public:
    virtual void AbstractFunction()=0;//This is a Pure Virtual Function
    //A pure virtual function is declared by assigning 0 in declaration.
    Abstraction()
    {
        cout<<"Base abstract class default constructor is called"<<endl;
    }
    Abstraction(int x)  //2.An abstract class can have constructors
    {
        cout<<"Base abstract class parameterised constructor is called"<<endl;
        this->val=x;
    }
    void SetValue(int x)
    {
        this->val=x;
    }
};
class DerivedAbstraction1:public Abstraction
{                               //3. If we do not override the pure virtual function in derived class, then derived class also becomes abstract class. 
public:
    DerivedAbstraction1()
    {
        
    }
    DerivedAbstraction1(int x)
    {
        this->val=x;
    }
};
class DerivedAbstraction2:public Abstraction
{
private:

public:
    DerivedAbstraction2()
    {
        cout<<"Derived class default constructor is called"<<endl;
    }
    DerivedAbstraction2(int x)
    {
        cout<<"Derived class parameterised constructor is called"<<endl;
        this->val=x;
    }
    void AbstractFunction()
    {
        cout<<"Implemented the abstract function of the base class, in the derived class"<<endl;
    }
    void ShowValue()
    {
        cout<<"The value stored is= "<<val<<endl;
    }
};
int main()
{
    // Abstraction obj1;     //The object can not be instantiated

    Abstraction* abst1;  //4. We can have pointers and references of abstract class type. 

    // DerivedAbstraction1 obj2;  //The object can not be instantiated due to the fact no 3.
    DerivedAbstraction2 obj1(3);
    Abstraction* abst2=new DerivedAbstraction2(4);

    obj1.AbstractFunction();
    abst2->AbstractFunction();

    return 0;
}