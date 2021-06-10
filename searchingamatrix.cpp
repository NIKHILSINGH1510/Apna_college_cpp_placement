#include<bits/stdc++.h>
using namespace std;

int main(){


    int n=5;
    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        /* code */for (int j = 0; j < n; j++)
        {
            /* code */array[i][j]=(i+j);
        }
        
    }

    // searching
    int find=8;
    int ctr=0;
    for (int i = 0; i < n; i++)
    {
        /* code */for (int j = 0; j < n; j++)
        {
            if(array[i][j]==find){
                cout<<"found at "<<i<<" row "<<j<<" column"<<endl;
                ctr=1;
            }

        }
        
    }

    if(ctr==0){
        cout<<"not found"<<endl;
    }
return 0;
}