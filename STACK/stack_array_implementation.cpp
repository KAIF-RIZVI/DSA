#include<iostream>
#include<vector>
using namespace std;

class Stack{
    public:
    vector<int> v;

    // push
    void push(int val){
        // v.push_back(val);
        v[v.size()-1]=val;
        return;
    }

    // pop
    void pop(){
        if(v.size()==0) return;
        v.pop_back(); 
        
        return;
    }

    //top
    int top(){
        return v[(v.size())-1];
        // return (v.size())-1;
    }
     
    // display
    void display(){
        for(int i=v.size()-1; i>=0;i--){
            cout<<v[i]<<endl;
        }
    }
    
};

int main(){
    Stack s;
    s.push(10);
    s.push(100);
    s.push(190);
    s.pop();
    cout<<"stack top"<<s.top()<<endl;
    s.display();
    return 0;

}