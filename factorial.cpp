#include<iostream>
using namespace std;

int fact(int num)
{   int factorial=num;
    for(int i=1;i<num;i++){
        factorial=factorial*i;

    }
    return factorial;
}



int main(){
    int n;
    cin>>n;

    cout<<fact(n);
    return 0;
}