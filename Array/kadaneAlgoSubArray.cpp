#include<iostream>
using namespace std;
int sumOFSubArray(int arr[],int n){
    int currSum=0;
    int larSum=0;
    for(int i=0;i<n;i++){
        currSum +=arr[i];
        //check if currSum<0
        if(currSum<0){
            currSum=0;
        }
        larSum=max(larSum,currSum);
    }
return larSum;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    int max=sumOFSubArray(arr,n);
    cout<<"max is:"<<max;
    return 0;
}