#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
Node *insert(Node *root, int key)
{
    if (root == NULL)
    {
        return new Node(key);
    }
    // rec case
    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }
    return root;
};

bool search(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    if (key < root->data)
    {
        return search(root->left, key);
    }
    return search(root->right, key);
};
void print(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}


//-----------------Deletion------------------------//
// for min left

Node *findMin(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
Node *remove(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (key < root->data)
    {
        root->left = remove(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        // when nodes match
        // No children
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // One Children
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        // Two Children
        else
        {
            Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = remove(root->right, temp->data);
        }
    }
    return root;
}
int main()
{
    Node *root = NULL;
    int a[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    for (int x : a)
    {
        root = insert(root, x);
    }
    print(root);
    cout << endl;
    int key;
    cin >> key;
    root=remove(root,key);
    //cout << search(root, key);
    print(root);
}