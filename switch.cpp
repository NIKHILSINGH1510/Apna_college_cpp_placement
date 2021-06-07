#include<iostream>

using namespace std;

int main()
{   int a,b;
    cout<<"enter two numbers\n";
    cin>>a>>b;
    char operation;
    cout<<"enter the operator\n";
    cin>>operation;
     
   switch(operation){
         case  '+':
         cout<<a+b<<endl;
         break;
         
         case  '-':
         cout<<a-b<<endl;
         break;
         
   case  '*':
         cout<<a*b<<endl;
         break;
     
   case  '/' :
         cout<<a%b<<endl;
         break;
    
   }
         return 0;
         
}