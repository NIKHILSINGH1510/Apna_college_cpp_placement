#include<iostream>
using namespace std;



int main(){
    int array[]={0,1,5,2,6,3,9,15};
    int mx=0;

    for(int i=0;i<8;i++){
        if(mx<array[i]){
            mx=array[i];
            }

        cout<<mx<<endl;
    }
    return 0;
}