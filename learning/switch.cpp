/*

Take the day no and print the corresponding day

for 1 print Monday,

for 2 print Tuesday and so on for 7 print Sunday.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cin >> day;
     
    switch(day){
        case 1:
        cout<<"monday";
        break;

         case 2:
        cout<<"tuesday";
        break;

         case 3:
        cout<<"wed";
        break;

         case 4:
        cout<<"thur";
        break;

         case 5:
        cout<<"fri";
        break;

         case 6:
        cout<<"sat";
        break;

         case 7:
        cout<<"sunday";
        break;
    }
    return 0;
}
    