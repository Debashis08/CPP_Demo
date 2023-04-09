#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node(int el)
    {
        val=el;
    }
};
bool Compare_nodes(Node* a,Node* b) //Global function for comparing the Nodes
{
    return (a->val > b->val);
}
class Test
{
private:
    vector<Node*> node_vec;

public:
    void push_value(int val)
    {
        node_vec.push_back(new Node(val));
    }
    void show_node_vec_sorted()
    {
        sort(node_vec.begin(),node_vec.end(),Compare_nodes);
        for(auto i:node_vec)
        {
            cout<<i->val<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Test obj;
    int n;
    cin>>n;
    int x;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
        obj.push_value(x);
    }
    sort(vec.begin(),vec.end(),greater<int>()); //sorting the vector in decreasing order
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end());                //sorting the vector in increasing order
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    obj.show_node_vec_sorted();
    return 0;
}