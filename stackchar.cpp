#include<iostream>
#include<string>
using namespace std;
#define max 10
int top = -1;

void push(char array[max],char ch)
{
    if(top>=max){
        cout<<"overflow"<<endl;
    }
    else{
        top++;
        array[top]=ch;
    }
}

void pop(char array[max]){
    if(top<0){
        cout<<"underflow"<<endl;
    }
    else{
        cout<<array[top]<<endl;
        top--;
    }
}
void reverse(char array[max]){
    if(top<0){
        cout<<"underflow"<<endl;
    }
    else{
        while(top>-1){
            cout<<array[top]<<" "; 
            top--;
        }
    }
}





int main()
{
     string s;
    int n;
    char array[max];

    do
    {
        cout<<"enter 1 to push"<<endl;
        cout<<"enter 2 to pop"<<endl;
        cout<<"enter 3 to reverse"<<endl;
        cout<<"enter 0 to exit"<<endl;
        cin>>n;

        switch (n)
        {
        case /* constant-expression */1:
            cout<<"enter the string\n "<<endl;
            getline(cin,s);
            for (int i = 0; i < s.length(); i++)
            {   char p=s[i];
                push(array,p);
            }
            // push(array,'h');
            // push(array,'i');
            // push(array,'j');

            

            break;
        case 2: pop(array);
        break;
        case 3: reverse(array);
        break;
        case 0:
            break;
        }

    } while (n!=0);
    
}