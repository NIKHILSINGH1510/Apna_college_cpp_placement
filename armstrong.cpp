#include<iostream>
#include<math.h>
using namespace std;
 int main()
 {
 int n;
 cout<<"enter  a number \n";
 cin>>n;
         int sum=0;
        while( n>0)
        int lastdigit=n%10;
        sum +=pow(lastdigit,3);
        n=n/10;
        
        cout<<"sum"<<endl;
        return 0;
 }

