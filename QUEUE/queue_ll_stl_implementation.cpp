#include <iostream>
#include <list>

using namespace std;

class queue
{
    list<int> l;

public:
    void push(int v) { l.push_back(v); }
    void pop()
    {
        if (!l.empty())
            l.pop_front();
    }
    int front() { return l.front(); }
    int back() { return l.back(); }
    void display()
    {
        for (int el : l)
        {
            cout << el << " ";
        }
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
    cout << endl
         << q.front();
    cout << endl
         << q.back();
    return 0;
}