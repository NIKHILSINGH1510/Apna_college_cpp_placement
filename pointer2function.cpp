// passing by value 
//passing by reference

#include<iostream>
using namespace std;

// int swap(int a,int b){
//     int temp;

//     temp =a;
//     a=b;
//     b=temp;

//     return a,b;
// }

// int main(){
// int a=2;
// int b=4;
// swap(a,b);

// cout<<a<<b;

// return 0;

// }
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){

    int a=2,b=4;
    int *aptr=&a;
    int *bptr=&b;
    swap(aptr,bptr);

    cout<<a<<" "<<b;
    return 0;
}