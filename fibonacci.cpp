#include<iostream>

using namespace std;

int main()
{
    int array[100];
    array[0]=0;
    array[1]=1;
    array[2]=2;
    for(int i= 3; i<20;i++)
        {
            array[i]= array[i-1] + array[i-2];
        }

    for(int i = 0; i<20;i++)
        {
            cout<<array[i]<<endl;
        }

return 0;

}