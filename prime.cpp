#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int num)
{   
    for (int i =2 ; i <= sqrt(num); i++)
    {
        if(num%i==0)
        {return false;}
       
    }
    return true;
    
}
int main(){
    int x,y;
    cin>>x>>y;

    for(int i = x; i<=y;i++){
        if(isprime(i))
        cout<<i<<"\n";
    }
    return 0;
}