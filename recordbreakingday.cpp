#include<iostream>
#include<algorithm>
using namespace std;

void record(int arr[],int n){
    int maxtilln=arr[0];
    
    if(arr[0]>arr[1])
    cout<<arr[0]<<" is a record breaking day"<<endl;

    for(int i=1;i<n-1;i++){

        if(arr[i]>maxtilln && arr[i]>arr[i+1]){
            cout<<arr[i]<<" is a record breaking day"<<endl;
        }
        maxtilln = max(arr[i],maxtilln);


    }
    if(arr[n-1]>maxtilln)
    cout<<arr[n-1]<<" is a record breaking day"<<endl;
}



int main(){
    int arr[]={1,2,0,7,2,0,2,2};
    int n=8;
    record(arr,n);
}