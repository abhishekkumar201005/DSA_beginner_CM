#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.get();
    char sentence[1000];
    char larg[1000];
    int larg_len=0;
    while(n--){
        cin.getline(sentence,1000);
        int len=strlen(sentence);
        if(len>larg_len){
            larg_len=len;
            strcpy(larg,sentence);
        }
    }
    cout<<"largest String is :"<<larg<<endl;
    return 0;
}