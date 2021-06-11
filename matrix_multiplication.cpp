#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int matrix1[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    int matrix2[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> matrix2[i][j];
        }
    }

   

    if(m==x)
    {
        int ans[n][y];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < y; j++)
            {
                ans[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
                for(int j=0;j<y;j++){
                for (int k = 0; k < m; k++)
                {
                    ans[i][j] += matrix1[i][k] * matrix2[k][j];
                }
                        
                }
        }for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    }
     if (m != x)
    {
        cout << "matrix multiplication not passible" << endl;
        return 0;
    }
    


}