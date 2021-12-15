#include<iostream>
using namespace std;
int linsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    //out of loop
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter number to be searched"<<endl;
    cin>>key;
    int found=linsearch(arr,n,key);
    if(found != -1){
        cout<<key <<" is found at index "<<found<<endl;
    }
    else{
        cout<<key <<"is not Found"<<endl;
    }
    return 0;
}