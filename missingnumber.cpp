#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[]={0,-9,1,3,-4,5};
    const int N = 1e6 +2;
    bool check[N];
    for(int i=0;i< N;i++){
        check[i]=0;
    }
    
    for (int i = 0; i < 6; i++)
    {
        if(array[i]>0){
            check[array[i]]=1;
        }
    }
    




    int ans=-1;
    for(int i=1;i<N;i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

return 0;

}