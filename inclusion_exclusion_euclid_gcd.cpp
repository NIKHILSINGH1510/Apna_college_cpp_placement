#include<iostream>
using namespace std;


int gcd(int a ,int b){
    int temp,res;
    while(b!=0){
        res = a%b;

        a=b;
        b=res;

    }

    return a;
}

int main(){

    int a,b;

    cin>>a>>b;

    cout<<gcd(a,b)<<endl;
    return 0;
}