// binary search in array

#include<iostream>
using namespace std;

int bin(int array[10],int n){
    int start=0;
    int last=10;
    while(start<=last)
    {
        int mid=( start+last)/2;
        if(array[mid]==n){
            cout<<mid;
            }
        else if(array[mid]>n){
            last = mid-1;

        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int n;
    cin>>n;

    bin(arr,n);

}