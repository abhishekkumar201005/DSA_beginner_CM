#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char b[100];
    char temp=cin.get();
    int len=0;
    while(temp!='\n'){
       b[len++]=temp;
        temp=cin.get();
    }
    b[len]='\0';
    cout<<b<<endl;
    return 0;
}