
              

   #include<bits/stdc++.h>
   using namespace std;
   
     int hexadeci2deci(string n)
     {
         int deci=0;
         int base=1;
          
           int s=n.size();
          for(int i=s-1;i>=0;i--)
          {
              if(n[i]>='0'&& n[i]<='9')
              {
                  deci+=base*(n[i]-'0');
              }
              else if (n[i]>='A' && n[i]<='F')

                  deci+=base*(n[i]-'A' +10);

                  base*=16;
          }
            return deci;
     
     }
   int main()
   {
       string n;
       cin>>n;
       cout<<hexadeci2deci(n)<<endl;

       return 0;
   }