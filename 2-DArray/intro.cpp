#include<iostream>
using namespace std;
void print(int arr[][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[n][m] <<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[1000][100];
    // n rows and m column
    int n,m;
    cin>>n>>m;
    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[n][m];
        }
    }
    print(arr,n,m);
    return 0;
}