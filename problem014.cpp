#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, x1, x2, dt, sb, xb = 0;
    cin >> a >> b >> c;
    dt = (b * b) - (4 * a * c);
    if (a == 0)
    {
        cout << "Not quadratic equation" << endl;
    }
    else
    {
        if (dt == 0)
        {
            x1 = x2 = (-b + sqrt(dt)) / (2 * a);
            printf("x1=x2=%.2f\n", x1);
        }
        else if (dt > 0)
        {
            x1 = (-b - sqrt(dt)) / (2 * a);
            x2 = (-b + sqrt(dt)) / (2 * a);
            printf("x1=%.2f;x2=%.2f\n", x1, x2);
        }
        else
        {
            sb = b / (-2 * a);
            xb = sqrt(-dt) / (2 * a);
            printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", sb, xb, sb, xb);
        }
    }
    system("pause");
    return 0;
}