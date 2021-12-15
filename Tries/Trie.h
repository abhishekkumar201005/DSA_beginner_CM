#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{  

public:
    char data;
    bool isTerminal;
    unordered_map<char, Node *> m;
    Node(char data)
    {
        char d = data;
        isTerminal = false;
    }
};
class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node('\0');
    }
    // Insertion
    void insert(string word)
    {
        Node *temp = root;
        for (char ch : word)
        {
            if (temp->m.count(ch) == 0)
            {
                Node *n = new Node(ch);
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    }
    // Searching
    bool search(string word){
        Node *temp=root;
        for(char ch:word){
            if(temp->m.count(ch)==0){
                return false;
            }
            temp=temp->m[ch];
        }
        return temp->isTerminal; 
    }
};