#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int v)
    {
        data = v;
        next = NULL;
    }
};

class list
{
public:
    Node *head;
    Node *tail;

    list()
    {
        head = tail = NULL;
    }

    // push_front
    void push_front(int v)
    {
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    // push_back
    void push_back(int v)
    {
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // pop_front
    void pop_front()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;
        if (head->next == NULL)
        {
            head = tail = NULL;
        }
        else
        {
            head = head->next;
        }
        delete temp;
    }

    // pop_back
    void pop_back()
    {
        if (head == NULL)
        {
            return;
        }

        if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        temp->next = NULL;
    }

    void insert(int pos, int value)
    {
        if (pos < 0)
        return;

        Node *newNode = new Node(value);
        if (pos == 0)
        {
            if (head == NULL)
            {
                head = tail = newNode;
                return;
            }
            else
            {
                newNode->next = head;
                head = newNode;
                return;
            }
        }
            int count = 0;
            Node *temp = head;
            while ( count < pos - 1 )
            {
                count++;
                temp = temp->next;
                if(temp == NULL){
                    delete newNode;
                    return;
                }
            }
            newNode->next = temp->next;
            temp->next = newNode;

             if (newNode->next == NULL)
             tail = newNode;
    }


    int search(int target){
        Node* temp = head;
        int index =-1;

        while(temp!=NULL){
            index++;
            if(target == temp->data){
                return index;
            }
            temp=temp->next;
        }
        return -1;
    }

    void show()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    list ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_back(100);
    ll.push_back(1000);
    ll.show();
    cout<<ll.search(40);

    return 0;
}