#include<iostream>
using namespace std;
int binsearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    //outer from loop
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter number to be searched"<<endl;
    cin>>key;
    int found=binsearch(arr,n,key);
    if(found != -1){
        cout<<key <<" is found at index "<<found<<endl;
    }
    else{
        cout<<key <<"is not Found"<<endl;
    }
    return 0;
}