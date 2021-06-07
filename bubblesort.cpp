#include<iostream>
using namespace std;

void bubble(int array[],int n){

    int temp=0;
    for(int i=0; i<n-1 ;i++)
    {
        for(int j=i+1;j<n;j++){

            if(array[j]>array[i]){
                //swap
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }


}

void print( int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
}

int main(){
    int array[] = {22,3,12,15,1};
    int num = 5;
    bubble(array,num);
    print(array,num);

    return 0;
}