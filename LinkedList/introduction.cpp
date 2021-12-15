#include <iostream>
using namespace std;
// Forward Decln
class Node
{

public:
    int data;
    Node *next;
    Node(int d) : data(d), next(NULL) {}

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
        cout << "Deleting Node with Data  :  " << data << endl;
    }
};

class List
{
public:
    Node *head;
    Node *tail;
    List() : head(NULL), tail(NULL) {}
    void push_front(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data)
    {

        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    // Insert
    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }
        // otherwise
        else
        {
            Node *temp = head;
            for (int jump = 1; jump <= pos - 1; jump++)
            {
                temp = temp->next;
            }
            Node *n = new Node(data);
            n->next = temp->next;
            temp->next = n;
        }
    }

    // Search
    // Linear search
    bool Search(int key)
    {
        Node *temp = head;
        int idx = 0;
        if (temp != NULL)
        {
            if (head->data == key)
            {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        // rec part
        return -1;
    }

    // Delete
    void pop_front(){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        Node *temp=tail;
        

    }
    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
};

int main()
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(2);
    l.insert(4, 2);
l.pop_front();
    // Print
    Node *head = l.head;
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
    // search
    int key;
    cin >> key;
    if (l.Search(key))
    {
        cout << "Ele Found";
    }
    else
    {
        cout << "Not found";
    }
    cout<<endl;
    return 0;
}