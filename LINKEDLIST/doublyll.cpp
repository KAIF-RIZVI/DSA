#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int d){
        data=d;
        prev=next=nullptr;
    }
};

class dll{
    public:
    Node *head,*tail;
    dll(){
        head=tail=nullptr;
    }

    // o(1)
    void insertathead(int d){
        Node *node= new Node(d);
        if(head == nullptr){
            head=tail=node;
        }
        else{
            node->next=head;
            head->prev=node;
            head=node;
        }
    }
    
    // o(1)  through tail but withut  tail its o(n)
    void insertatail(int d){
        Node *node= new Node(d);
        if(head == nullptr){
            head=tail=node;
        }
        else{
            tail->next=node;
            node->prev=tail;
            tail=node;
        }
    }
   
    //o(n)
    void insertatposition(int p, int v){
         if(head ==nullptr || p==0){
          insertathead(v);
          return;
         }

         Node * curr=head;
         Node * temp;
         int count=0;
         while(count<p-1  && curr->next!=nullptr){
            curr=curr->next;
            count++;
         } 

         if(count==p-1 && curr->next!=nullptr)
        {   Node *node= new Node(v);
            temp=curr->next;
            curr->next=node;
            node->prev=curr;
            node->next=temp;
            temp->prev=node;
        }
        else{
            insertatail(v);
        }
    }

    void traverse(){
        Node* curr=head;

        if(head == nullptr) return;
        else{
            while(curr->next!=nullptr){
                cout<<curr->data<<"<->";
                curr=curr->next;
            }
            cout<<curr->data;
        }

    }

    void deletehead(){
        Node* temp=head;
        if(head == nullptr)
        return;
        else if(head->next == nullptr) 
        {
            
            head=tail=nullptr;
        }
        else{
            head->next->prev =nullptr;
            head=head->next;
        }
        delete temp;
    }

    void deletetail(){
        if(head == nullptr)
        return;
        else if(head->next == nullptr) 
        {   Node* temp=head;
            delete temp;
            head=tail=nullptr;
        }
        else{
          Node* temp=tail;
          tail = tail->prev;
          tail->next=nullptr;
          delete temp;
        }
        

    //     void deleteatpos(Node* p){
    //         if(head == nullptr  || p==nullptr)  return;
    //         if(head->next== nullptr) head=tail=nullptr;
    //         else{
    //         p->prev->next =p->next;
    //         p->next->prev =p->prev;
    //     }
    // }
}   
};

int main(){

    dll  d;
    d.insertathead(1);
    d.insertathead(2);
    d.insertathead(3);
    d.insertathead(4);
    d.insertathead(5);

    d.insertatposition(3,10);
    d.traverse();
    return 0;
}