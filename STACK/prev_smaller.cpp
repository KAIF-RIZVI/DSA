#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> prevsmaller(vector<int> &a)
{
    stack<int> st;
    for (int i = 0; i < a.size(); i++)
    {
        while (st.size() != 0 && a[i] <= st.top())
        {
            st.pop();
        }

        if (st.size() == 0)
        {
            st.push(a[i]);
            a[i] = -1;
        }
        else
        {
            int k = a[i];
            a[i] = st.top();
            st.push(k);
        }
    }
    return a;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    vector<int> res = prevsmaller(arr);
    for (int el : res)
        cout << el << " ";
    return 0;
}
