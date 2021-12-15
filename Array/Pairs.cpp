#include<iostream>
using namespace std;
void printAllPairs(int arr[],int n){
    //print all elements 
    for(int i=0;i<n;i++){
        int x=arr[i];
        for(int j=i+1;j<n;j++){
            int y=arr[j];
        
        cout<< x <<"," <<y <<endl;
        }
         cout<<endl;
    }
   
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    printAllPairs(arr,n);
    return 0;
}