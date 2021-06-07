#include<iostream>
using namespace std;
 int main()
 {
     int n;
     cout<<"enter a number\n";
     cin>>n;
     int temp=1;
     for(int i=1;i<=n;i++)
     {
             for(int j=1;j<=temp;j++)
                {
                   if((i+j)%2==0)
                          {
                               cout<<1<<" ";

                             }

                 else{
                cout<<0<<" ";
                 }
                 }
                 if(temp<n)
                 temp=temp+1;
        cout<<endl;

     }
     return 0 ;
 }