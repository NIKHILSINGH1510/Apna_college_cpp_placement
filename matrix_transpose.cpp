#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5,num=1;
    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        /* code */for (int j = 0; j < n; j++)
        {
            /* code */array[i][j]=(i+j)*num;
        }
        num++;
        
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

    cout<<"transposed matrix"<<endl;

    for (int j = 0; j < n; j++)
    {
        /* code */for (int i = 0; i < n; i++)
        {
            /* code */cout<<array[i][j]<<"  ";
        }
            cout<<"\n";   
    }
    return 0;
}