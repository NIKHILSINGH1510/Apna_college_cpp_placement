#include <bits/stdc++.h>

using namespace std;
int main()
{

    int array[] = {1, 2, 3, 8, 10};
    int n = 13;
    int sum = 0;

    //algo

    int st = -1, en = -1;
    int i = 0, j = 0;

    while (j < 5 && sum + array[j] <= n)
    {
        sum += array[j];
        j++;
    }

    if (sum == n)
    {
        cout << "0"
             << " and " << j << endl;
        return 0;
    }

    while (i < j)
    {
        sum += array[j];
        while (sum > n)
        {
            sum -= array[i];
            i++;
        }
        if (sum == n)
        {
            st = i;
            en = j;
            break;
        }
        j++;
    }
    
    
        cout << st << "and" << en << endl;
    
    

    
    return 0;
}