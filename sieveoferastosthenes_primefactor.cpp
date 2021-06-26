#include<iostream>
using namespace std;
void primefactor(int n){
    int spf[100]={0};
    for (int i = 0; i <= n; i++)
    {
        /* code */ spf[i]=i;
    }
    for (int i = 2; i <=n; i++)
    {
        if(spf[i]==i){
            for (int j = 0; j <= n; j=j+i)
            {
                if (spf[j]==j){
                    spf[j]=i;
                }
                
                
            }
            
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    
}
int main(){
int n= 42;
primefactor(n);

return 0;
             
} 