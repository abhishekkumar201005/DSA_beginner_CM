#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //C++ STL
 map<char,int>M;
 unordered_map<char,int>U;

 string s="Abhishek Kumar";
 for(char c:s){
     M[c]++;
 }
 for(char c:s){
     U[c]++;
 }
 return 0;
}