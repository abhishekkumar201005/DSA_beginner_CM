#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        // loop to find current element inserted
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={3,2,4,6};
    int n=sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
   /* for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    */
   for(auto x:arr){
       cout<<x <<" ";
   }
    return 0;
}