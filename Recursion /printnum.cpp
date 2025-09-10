#include<iostream>
using namespace std;
int print(int n){
    //base case
    if(n==0){
        return;

    }
    //tail rec
    cout<<n<<endl;// 5 4 3  2 1
    print(n-1);
    //head rec
        print(n-1);
        cout<<n<<endl;// res- 1 2 3 4 5
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;

}