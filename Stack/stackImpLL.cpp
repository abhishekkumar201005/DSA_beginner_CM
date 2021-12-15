#include <iostream>
using namespace std;
// Forward Decln
class Node
{
public:
    char data;
    Node *next;
    Node(char d)
    {
        data = d;
    }
};
class stack
{
public:
    Node *head;
    stack()
    {
        head = NULL;
    }
    void push(char data)
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
    }
    bool empty()
    {
        return head == NULL;
    }
    int top()
    {
        return head->data;
    }
    void pop()
    {
        if (head != NULL)
        {
            Node *n = head;
            head = head->next;
            delete n;
        }
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}