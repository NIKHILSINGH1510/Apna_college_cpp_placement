#include<iostream>
using namespace std;
int fact(int num)
{   int factorial=num;
    for(int i=1;i<num;i++){
        factorial=factorial*i;

    }
    return factorial;
}

int comb(int x, int y)
{
    int ans;
    ans= fact(x)/(fact(y)*fact(x-y));
    return ans;
}

int main()
{
    int n,r;
    cin>>n>>r;

    cout<<comb(n,r);
    return 0;
}