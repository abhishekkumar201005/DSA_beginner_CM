#include<iostream>
using namespace std;
int sumOFSubArray(int arr[],int n){
    //prefix sum
    int prefix[n]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    //for large elements 
    int maxSum=0;
    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           int sumArray=i>0?prefix[j]-prefix[i-1]:prefix[j];
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