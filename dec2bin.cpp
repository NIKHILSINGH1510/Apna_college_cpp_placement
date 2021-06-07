#include<iostream>
using namespace std;

int conv(int n){
    int arr[10];
    int i=0;
            while(n>0){
            
            arr[i]=(n%2);
            n=n/2;
            i=i+1;

            }

        for(int j= i-1; j>=0;j--){
            cout<<arr[j];
        }
return 0;
}


int main(){
    int n;
    cin>>n;

    conv(n);
    
    return 0;
}