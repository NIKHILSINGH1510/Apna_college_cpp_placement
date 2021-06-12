#include<bits/stdc++.h>
using namespace std;

int main(){
    int find = 5;
   int n=3;
   int m=3;

    
    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};

   

    //searching

   

    if(find<array[0][0]){
        cout<<"does not exist"<<endl;
        return 0;
    }
    if(find>array[n-1][m-1]){
        cout<<"does not exist"<<endl;
        return 0;
    }

    int row=0,column=m-1;
    bool flag;
    
    while(row<n and column>=0){
    if(find == array[row][column]){
        flag=true;
    }
    if(array[row][column]>find){
        column--;
    }
      if(array[row][column]<find){
        row++;
    }  
}
if(flag){
    cout<<"element found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
}