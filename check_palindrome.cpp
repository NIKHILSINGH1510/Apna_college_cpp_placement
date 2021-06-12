#include<iostream>
using namespace std;
int main(){
    char arr[100]="nitin";
    int st=0;
    int end=4;

    


    
    while(arr[st]=arr[end]){
        if(st==end || st>end){
            cout<<"palindrome"<<endl;
            return 0;
        }
        st++;
        end--;
    }
    cout<<"not palindrome";

    return 0;
}