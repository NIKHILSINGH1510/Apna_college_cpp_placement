//increasing
#include<iostream>
using namespace std;

int number(int n,int i){
    if(n==i){
        return n;
    }
    cout<<i<<" ";
   return number(n,i+1);
}
int main(){
    int n;
    cin>>n;

    cout<<number(n,1)<<" ";

    return 0;
}