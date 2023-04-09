#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple<char,char,int> obj;
    obj=make_tuple("a","b",2);

    return 0;
}