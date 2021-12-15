#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]={'a','b','c','d','e'};
    cout<<a <<endl;
    char b[]={'a','b','c','d','e','f','\0'};
    cout<<b<<endl;
    char c[]="abc";
    cout<<c<<endl;

    cout<<strlen(c)<<endl;
    cout<<sizeof(c)<<endl;
    return 0;
}