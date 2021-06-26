#include<iostream>
using namespace std;

int main(){

    int n= 50;

    

int checkarray[n]={0};
    
    
    
   for(int j =2; j<=n;j++)
    {
        if(checkarray[j]==0){
            for (int i = j*j; i <=n; i=i+j)
            {
                
                    checkarray[i]=1;

                
            }
            
    }
  
    }


    for(int i=2;i<=n;i++){
        if(checkarray[i]==0)
        cout<<i<<endl;
    }
    return 0;

}