#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char array[n+1];
    cin.getline(array, n);
    cin.ignore();
    
    int i=0;
    int currlength=0, maxlength=0;
int st =0,maxst=0;
    while (1)
    {  if(array[i]==' ' || array[i]=='\0')
        {
            if(currlength>maxlength){
                maxlength = currlength;
                maxst= st;
            }
            currlength =0;
            st=i+1;
        }
        else
         currlength++;

        if(array[i]=='\0')
        break;

        i++;
    }
    cout<<maxlength<<endl;

    for (int i = 0; i < maxlength; i++)
    {
        cout<<array[i+maxst];
    }
    

    return 0;

}