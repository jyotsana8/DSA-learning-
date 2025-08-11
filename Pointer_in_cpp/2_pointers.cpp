#include<iostream>
using namespace std;
int main(){
    //int *p=0;
    //cout<<*p<<endl;
    //diffrent ways to initialise pointers
    /*
   int i=5;
     int *w=&i;
     cout<<"Address at w: "<<w<<endl;
     cout<<"value at w: "<< *w <<endl;
     //second way
    int *p=0;
     p=&i;
    cout<<"Address at p: "<<p<<endl;
     cout<<"value at p: "<< *p <<endl;

     int num=5;
     int a=num;
      cout<<"Before a "<<num<<endl;
     cout<<num<<endl;//value is 5;
       a++;
     cout<<"After a, num "<<num<<endl;

     int *p=&num;
     cout<<"Before num "<<num<<endl;
    (*p)++;
     cout<<"After num "<<num<<endl;// value is 6 now , *p hold value and *p++ means value+1
 

//copying a pointer
int *q=p;
cout<<q<<" -"<<p<<endl;
cout<<*q<<" -"<<*p<<endl;
  */ 
//imp concept
int i=3;
int *t=&i;
cout<<"Addresss of i"<<t<<endl;
(*t)++;
cout<<"After ++"<<*t<<endl;
//address ++
t=t+1;
cout<<"Addresss of i"<<t<<endl;// inc add by 4 coz of int  
 }