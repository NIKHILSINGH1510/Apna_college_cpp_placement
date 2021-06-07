
#include<iostream>
using namespace std;
   
    int bin2dec(int n)
    {int deci=0;
     int base=1;
      
         while(n>0);
           {
             int rem=n%10;
              deci=deci+rem*base;
              base=base*2;
              n=n/10;
           }
           return deci;
           
    }
    int main()
    {
         int n;
    cin>>n;

    bin2dec(n);

    return 0;
}