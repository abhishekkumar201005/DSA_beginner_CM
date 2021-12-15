#include<iostream>
#include<vector>
using namespace std;
void countingSort(int arr[],int n){
    //Largest elememt
    int largest=-1;
    for(int i=0;i<n;i++){
        largest=max(largest,arr[i]);
    }
    //create a counting array(dynamic)
    //int *freq=new int[largest+1];
    vector<int> freq(largest+1,0);

//update frequency array
for(int i=0;i<n;i++){
    freq[arr[i]]++;
}
//put back element from freq to main array
int j=0;
for(int i=0;i<=largest;i++){
    while(freq[i]>0){
        arr[j]=i;
        freq[i]--;
        j++;
    }
}
}
int main(){
    int arr[]={3,2,4,6,6,4,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(int);
    countingSort(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}