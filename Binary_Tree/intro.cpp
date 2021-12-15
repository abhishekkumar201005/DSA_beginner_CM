#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    //Constructor

    Node(int d){
        data=d;
        left=right=NULL;
    }
};
Node *buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }

    Node *n=new Node(d);
    n->left=buildTree();
    n->right=buildTree();
    return n;
};

void prPreorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data <<" ";
    prPreorder(root->left);
    prPreorder(root->right);
}
void prInorder(Node *root){
    if(root==NULL){
        return;
    }
    prInorder(root->left);
    cout<<root->data <<" ";
    
    prInorder(root->right);
}
void prPostorder(Node *root){
    if(root==NULL){
        return;
    }
    prPostorder(root->left);
     prPostorder(root->right);
    cout<<root->data <<" ";
    
   
}
int main(){
    Node *root=buildTree();
    prPreorder(root);
    cout<<endl;
    prInorder(root);
    cout<<endl;
    prPostorder(root);
}