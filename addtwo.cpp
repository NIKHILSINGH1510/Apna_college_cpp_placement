#include<iostream>
using namespace std;

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main(){
    int a=4,b=5;
   
    cout<< add(a,b);
    return 0;
}