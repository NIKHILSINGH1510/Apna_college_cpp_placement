/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
 int sidea,sideb,sidec;
 cout<<"input three sides of triangle:\n";
 
 cin>>sidea>>sideb>>sidec;
  
  if(sidea == sideb && sideb == sidec)
   {cout<<"this is equi.triangle.\n";}
   else if(sidea==sideb||sideb==sidec||sidea==sidec)
     {cout<<"this is iso.triangle\n";}
    else{
        cout<<"this is scalene triangle.\n";
    } 
    
    return 0;
     }