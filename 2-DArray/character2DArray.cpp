#include<iostream>
using namespace std;

int main(){
    char numbers[][10]={
        "one",
        "two",
        "three",
        "four",
        "five",
    };
    int n=5;
    for(int i=0;i<n;i++){
    cout<<numbers[i]<<endl;
    }
    return 0;
}