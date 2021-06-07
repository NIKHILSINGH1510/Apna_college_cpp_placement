// check pythagorian triplet

#include<iostream>
using namespace std;

bool pyth(int x, int y, int z){
    if((x*x + y*y) ==z*z)
        {return true;}

    else{return false;}
}



int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(pyth(a,b,c))
    cout<<"they are pythagorian triplet";

    else{
        cout<<"not pythagorian triplet";
    }
    return 0;
}