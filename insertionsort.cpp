#include<iostream>

using namespace std;

void sort(int array[],int num){
    int temp=0;
    for(int i=1;i<num;i++){
        for(int j=0;j<i-1;j++){
            if(array[i]<array[j]){
                //swap
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
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
    int array[]={12,45,23,51,19,8};
    int num=6;

    sort(array,num);
    print(array,num);

    return 0;



}