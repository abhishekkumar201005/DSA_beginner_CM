#include<iostream>
#include<cstring>
using namespace std;

int main(){
    //read one by one
    char ch;
    ch=cin.get();

    //count
    int alpha=0;
    int digit=0;
    int space=0;
    while(ch!='\n'){
        if(ch>='0'&&ch<='9'){
            digit++;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            alpha++;
        }
        else if(ch==' '){
            space++;
        }
         ch=cin.get();
    }
  cout<<"Total Alphabet :"<<alpha<<endl;
  cout<<"Total Digit :"<<digit<<endl;
  cout<<"Total Spaces :"<<space<<endl;
}