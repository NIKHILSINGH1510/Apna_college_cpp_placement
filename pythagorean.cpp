 #include <iostream>
 #include <math.h>
using namespace std;

bool sqrt(int n,int a, int b)
{

    for (int i = 0; i <= n; i++)
    {
        if (b == sqrt((a * a) + (n * n)))
        {
            return true;
        }
        
    }
     return false;
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << sqrt(x,y,z) << endl;

}