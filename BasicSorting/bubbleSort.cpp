#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
for(int i=0;i<n;i++){
    //for repeatation
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
}
int main(){
    int arr[]={3,2,4,6};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
   /* for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    */
   for(auto x:arr){
       cout<<x <<" ";
   }
    return 0;
}