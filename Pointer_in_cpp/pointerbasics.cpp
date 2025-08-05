#include<iostream>
#include "pointerbasics.h"
using namespace std;
int main(){
    int num=5;
   
    cout<<"value of num "<<num<<endl;
    //address of num
    cout<<"Adress of num: "<<&num<<endl;

    int *ptr=&num;
   cout<<"Value at ptr:"<<*ptr<<endl;
   cout<<"Address of ptr:"<<ptr<<endl;
   
    double d = 4.5;
    double *p1 = &d;
    cout << "Adress:" << p1 << endl;
    cout << "Value:" << *p1 << endl;

    //size of pointer 
    cout<<"Size of Int:"<<sizeof(num)<<endl;
    cout<<"Size of int ptr:"<<sizeof(ptr)<<endl;
    cout<<"Size of double ptr:"<<sizeof(p1)<<endl;

}