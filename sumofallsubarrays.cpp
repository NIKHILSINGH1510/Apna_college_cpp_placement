#include<iostream>
using namespace std;


int main()
{
    int array[] = {2,1,5,6,9};

    int sum = 0;

    for(int i=0;i<5;i++){
        cout<<array[i] <<" ";
        sum=array[i];
        for(int j=i+1;j<5;j++){
            sum=sum+array[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}