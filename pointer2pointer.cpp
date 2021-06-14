#include<iostream>
using namespace std;

int main(){
    int a=10;

    int *aptr = &a;

    int **ptr=&aptr;

    cout<<a<<endl;
    cout<<*aptr<<endl;
    cout<<**ptr<<endl;
    return 0;
}