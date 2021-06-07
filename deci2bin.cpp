#include<iostream>
using namespace std;
  int deci2bin(int num)
  {
    int binar;
       while(num>0)
       {
       int binar=num%2;
       cout<<binar;
       num=num/2;
          
      }
      return binar;
  }


int main()
{
    int n;
    cin>>n;
    cout<<deci2bin(n)<<endl;
    return 0;
}