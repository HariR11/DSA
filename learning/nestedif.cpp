/*
Take the age from the user and then decide accordingly
1.If age < 18,
  print -> "not eligible"
2.If age >= 18 and age <= 54,
  print -> "eligible for job"
3.If age >= 55 and age <= 57,
  print -> "eligible for job, but retirement soon"
4.If age > 57
  print -> "Retirement time"
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
        int age;
        cin>>age;
        if(age<18){
            cout<<"not eligible";
        }
        else if(age<=57){
          cout<<"eligible for job";
          if(age>=55)
          cout<<"but retirement soon";
          }

          else{
          cout<<"Retirement time";
        }
        return 0;
}