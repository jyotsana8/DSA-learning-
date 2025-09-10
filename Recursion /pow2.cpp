#include<iostream>

using namespace std;
int power(int n){
    //base case->complusory
    if(n==0)
     return 1;
//as we know rec means solving big problem using small problem
//int smallPro=power(n-1);
//int bigProb=2 * smallPro;
 return 2*power(n-1);

}
int main(){
    int n;
    cin>>n;
    int ans= power(n);
     cout<<"power is "<<ans<<endl;
}