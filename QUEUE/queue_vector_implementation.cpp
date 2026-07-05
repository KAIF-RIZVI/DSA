#include <iostream>
#include <vector>
using namespace std;

class queue
{
    vector<int> v;
public:
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.erase(v.begin());
    }
    int front()
    {
        return v.front();
    }
    int back()
    {
        return v.back();
    }

    void display(){
        for(int el: v) cout<<el<<" ";
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    
    q.display();
    cout<<endl<<q.front();
    cout<<endl<<q.back();


    return 0;
}