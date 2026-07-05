#include<iostream>
using namespace std;

//implementing linked list
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};

class List{
    public:
    Node *head,*tail;

    List(){
        head=tail=nullptr;
    }

    //push_back
    void push_back(int val){
        Node* node=new Node(val);
        if(head==NULL) head=tail=node;
        else{
            tail->next=node;
            tail=node;
        }
    }
    //push front
    void push_front(int val){
        Node* node=new Node(val);
        if(head==NULL) head=tail=node;
        else{
           node->next=head;
           head=node;
        }
    }

   //push back
    void pop_back(){
        if(head==NULL) return;
        else if(head->next==NULL){
            head=tail=nullptr;
        }
        else{
            Node *temp=head;
            while(temp->next != tail){
                temp=temp->next;
            }
            temp->next=nullptr;
            tail=temp;
        }
    }
    //pop front
    void pop_front(){
        if(head==NULL) return;
        else if(head->next==NULL){
            head=tail=nullptr;
        }
      else{
        head=head->next;
      }
    }
    //traverse

    void traverse(){
         if(head==nullptr) return;
         Node *temp=head;
          while(temp->next != nullptr){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
            cout<<temp->data;


            // also we can reverse then print for better understanding
    }
    //last
    int last_node_val(){
        if(head==nullptr) return -1;
        return head->data;
    }


};


class Stack{
    public:
    List l;

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
        return l.last_node_val();
    }
    // display
    void display(){
        l.traverse();
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