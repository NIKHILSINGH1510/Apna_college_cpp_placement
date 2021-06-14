#include<iostream>
using namespace std;

int main(){

    int array[]={10,6,5,4};
    cout<< *(array+1)<<endl;

    int *ptr=array;
    for (int i = 0; i < 4; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    

    return 0;
}