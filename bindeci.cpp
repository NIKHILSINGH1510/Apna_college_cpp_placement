#include <iostream>
 #include <math.h>
using namespace std;

   int rem(int num)
   {
       int x=num;
    int dec_val=0;
    int base= 1;
     int temp= x;

     while(temp){
         int last_digit = temp%10;
         temp = temp/10;
         dec_val += last_digit*base;
         base = base*2;
     }       
      
       
    return dec_val;

   }


  int main()
   {
       int n;
       cin>>n;
    
       cout<<rem(n)<<endl;

   }