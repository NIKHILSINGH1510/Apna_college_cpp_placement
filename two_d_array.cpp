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
    //printing the output
    for (int i = 0; i < n; i++)
    {
        /* code */for (int j = 0; j < n; j++)
        {
            /* code */cout<<array[i][j]<<" ";
        }
            cout<<"\n";   
    }
    return 0;
}