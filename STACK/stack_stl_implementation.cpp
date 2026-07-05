#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(0);
    s.push(30);
    s.push(20);
    s.push(10);
    s.pop();
    cout<<s.top();
    cout<<s.empty();
    cout<<s.size();
    return 0;
}