#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int current=arr[i];
        int min =i;
        // find out the element
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }     
        }
      //swap outside the loop
      swap(arr[min],arr[i]);
    }
}
int main(){
    int arr[]={3,2,4,6};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
   /* for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    */
   for(auto x:arr){
       cout<<x <<" ";
   }
    return 0;
}