#include<iostream>
#include<list>
using namespace std;


class Stack{
    private:
    list<int> l;
    public:
    // push
    void push(int val){
        l.push_front(val);
    }
    // pop
        void pop(){
        l.pop_front();
    }
    // top
        int top(){
        return l.front();
    }
    // display
    void display(){
        for(int x:l){
            cout<<x;
            
        }
    }
};


int main(){
    Stack s;
    s.push(90);
    s.push(909);
    s.push(9000);
    s.pop();
    cout<<endl<<"top:"<<s.top()<<endl;
    s.display();


    return 0;

}