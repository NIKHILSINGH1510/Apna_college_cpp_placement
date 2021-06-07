#include<iostream>
using namespace std;

int sort(int array[6]){
    int temp;
    for(int i=0;i<6;i++){
        for(int j=i+1; j<6;j++){
            if(array[j]<array[i]){
            temp=array[j];
            array[j]=array[i];
            array[i]=temp;
        }
        }

    
    }
    for(int i=0;i<6;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}




int main()
{
    int arr[]={ 2,4,1,66,4,50};

    sort(arr);
    return 0;
}