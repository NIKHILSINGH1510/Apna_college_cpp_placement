#include<iostream>

using namespace std;

int main(){
    int arr[]={4,10,44,56,78,1,22,11,100,80};
    int n;
    cin>>n;
    int x=0;

    for (int i=0;i<10;i++){
        if(arr[i]==n){
        cout<<"found at index "<<i;
        x=1;

        }
      
    }
    if(x!= 1){
        cout<<"-1";
    }

    return 0;
}