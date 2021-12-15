#include<iostream>
using namespace std;
int sumOFSubArray(int arr[],int n){
    
    //print all elements 
    int maxSum=0;
    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           int sumArray=0;
           for(int k=i;k<=j;k++){
               sumArray+=arr[k];
           }
           //put a condition for max
           maxSum=max(maxSum,sumArray);
       }
    }
    return maxSum;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    int max=sumOFSubArray(arr,n);
    cout<<"max is:"<<max;
    return 0;
}