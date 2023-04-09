#include<iostream>
#include<vector>
using namespace std;
class Test
{
private:
    int n;
    vector<int> vec;
public:
    Test(int size)
    {
        n=size;
        vec.resize(n);
    }
    void check_vector_size()
    {
        cout<<vec.size()<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    Test obj(n);
    obj.check_vector_size();
    return 0;
}