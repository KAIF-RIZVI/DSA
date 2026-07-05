#include<iostream>
using namespace std;

class Node{
    public:
    int  data;
    Node *next;

    Node(int d){
        data=d;
        next=nullptr;
    }
};

class list{
    public:
    Node *head,*tail;
    list(){
        head=tail=nullptr;
    }

    void push_back(int v){
        Node *node= new Node(v);
        if(head==nullptr) {
            head=tail=node;
            return;
        }
        else{
            tail->next =node;
            tail=node;
        }
    }

    void pop_front(){
         if(head==nullptr) {
            return;
        }
        else if(head->next == nullptr){
            delete head;
            head=tail=nullptr;
        }
        else{
            Node *temp=head;
            head=head->next;
            delete temp;
        }
    }
    int front_ll(){
        if(head==nullptr) {
            throw runtime_error("List is empty");
        }

        return head->data;
    }
    int back__ll(){
        if(head==nullptr) {
            throw runtime_error("List is empty");
        }
        return tail->data;
    }
    void traverse(){
        if(head== nullptr) return;
        else{
            Node *temp=head;
            while(temp!= nullptr){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
    }

    bool empty(){
        return head == nullptr;
    }
};


class queue{
    list l;
    public:
    void push(int v) {l.push_back(v);}
    void pop(){l.pop_front();}
    int front(){ return l.front_ll();}
    int back(){ return l.back__ll();}
    void display(){l.traverse();}
};



int main(){
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