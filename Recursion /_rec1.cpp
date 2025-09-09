#include<iostream>
using namespace std;
int factorial(int n){
    //base case->complusory
    if(n==0)
     return 1;
//as we know rec means solving big problem using small problem
int smallPro=factorial(n-1);
int bigProb=n * smallPro;
return bigProb;

}
int main(){
    int n;
    cin>>n;
    int ans= factorial(n);
     cout<<"Factorial is "<<ans<<endl;
}