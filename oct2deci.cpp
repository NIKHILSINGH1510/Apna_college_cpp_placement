#include<iostream>
using namespace std;
   
      int oct2deci(int n)
      {
          int deci=0;
          int base=1;

          while(n>0)
          {
              int rem=n%10;
              deci=deci+rem*base;
               base=base*8;
              n/=10;
          }
          return deci;
      }


   int main()
   {
       int n;
       cin>>n;
       cout<<oct2deci(n)<<endl;
       return 0;
   }