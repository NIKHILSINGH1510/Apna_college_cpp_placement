#include<iostream>
using namespace std;


int firstoccur(int array[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(array[i]==key){
        return i;
    }
    return firstoccur(array,n,i+1,key);
}

int lastoccur(int array[],int n, int i, int key){
    if(i==n){
        return -1;
    }

    int restarray= lastoccur(array,n,i+1,key);
    if(restarray!= -1){
        return restarray;
    }
    if(array[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int n=5;
    int key=4;
    
    int array[n]={10,4,5,4,9};
    int i=0;
    

    cout<<lastoccur(array,n,i,key)<<endl;
    return 0;
    
}