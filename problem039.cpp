#include <iostream>
#include <math.h>
using namespace std;
double fun(int n)
{
    double sum = 0.0;
    double s = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            sum += i;
        }
    }
    s = sqrt(sum);
    return s;
}
int main()
{
    int n = 0;
    cin >> n;
    printf("%lf\n", fun(n));
    system("pause");
    return 0;
}