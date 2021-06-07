
    #include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int maxSum=INT_MIN;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {    int sum=0;
           
            for(int k=0;k<=j;k++){
            sum+=arr[k];
            
        }
        cout<<endl;
        maxSum =max(maxSum,sum);
        }
    cout<<maxSum<<endl;
    return 0;
     }     
}