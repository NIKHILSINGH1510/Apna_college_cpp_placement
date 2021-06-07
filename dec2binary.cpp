#include<iostream>
using namespace std;
   
    
        int binary (int num)
    {
         
         while(num>0);
           {
              int binar=num%2;
               cout<<binar;
               num=num/2;
           }
           return 0;
    }

    int main()
{
    int n;
    cin>>n;

    cout<<binary(n);

    return 0;
}