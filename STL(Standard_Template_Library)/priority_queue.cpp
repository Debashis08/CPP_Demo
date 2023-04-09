#include<bits/stdc++.h>
using namespace std;
class Node
{
public:

};
class Compare_nodes
{

};
class Test
{
private:
    priority_queue<int,vector<int>> pq;
    priority_queue<Node*,vector<Node*>,Compare_nodes> pq_nodes;
public:
    void push_value(int val)
    {
        pq.push(val);
    }
    void show_values()
    {
        while(pq.empty()!=true)
        {
            cout<<pq.top()<<endl;
            pq.pop();
        }
    }
};
int main()
{
    Test obj;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        obj.push_value(x);
    }
    obj.show_values();
    return 0;
}