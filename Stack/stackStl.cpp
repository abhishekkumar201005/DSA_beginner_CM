#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>books;

    books.push("C++");
    books.push("Java");
    while(!books.empty()){
        cout<<books.top()<<" ";
        books.pop();
    }
    return 0;
}