#include<iostream>
using namespace std;

int fact(int num)
{   int factorial=num;
    for(int i=1;i<num;i++){
        factorial=factorial*i;

    }
    return factorial;
}


int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            int cbn = (fact(i)/(fact(j)*fact(i-j)));
            cout<<cbn;
        }
        cout<<endl;
    }

return 0;

}