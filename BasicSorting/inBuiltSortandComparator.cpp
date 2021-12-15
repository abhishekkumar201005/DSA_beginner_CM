#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int main(){
    int arr[]={3,2,4,6,5,7,1,9,8};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n,compare);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}