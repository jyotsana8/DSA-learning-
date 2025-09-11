#include<iostream>
using namespace std;
void reachHome(int src, int dest){
    //base case
    if(src==dest){
        cout<<"Finally Ghar pahuch gye"<<endl;
        return ;
    }
    src++;
    reachHome(src,dest);
}
int main(){
    int src=1;
    int dest=10;
    reachHome(src, dest);
    return 0;

}