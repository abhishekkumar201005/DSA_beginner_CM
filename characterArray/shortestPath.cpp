#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // input string
    char route[100];
    cin.getline(route, 100);

    // for axis
    int x = 0;
    int y = 0;

    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }
   cout<< "Final x and y is : "<<x <<","<<y<<endl;

   //Condition for Quadrants 1
   if(x>=0 && y>=0){
       while(y--){
           cout<<"N";
       }
       while(x--){
           cout<<"E";
       }
   } 
    //Condition for Quadrants 2
  else if(x<=0 && y>=0){
       while(y--){
           cout<<"N";
       }
       while(x++){
           cout<<"W";
       }
   } 
    //Condition for Quadrants 3
   else if(x< 0 && y<0){
       while(y++){
           cout<<"S";
       }
       while(x++){
           cout<<"W";
       }
   } 
    //Condition for Quadrants 4
   else if(x>=0 && y<0){
       while(y++){
           cout<<"S";
       }
       while(x--){
           cout<<"E";
       }
   } 
}