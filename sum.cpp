#include<iostream>

 using namespace std;

   int sum(int num)
   { int add =0;
       for(int i=0;i<=num;i++)
       {
           add+=i;
       }
     return add;
   }

     
int main()
 {
     
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;

 }  