#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, circumference, area, cir, tp = 0;
    cin >> a >> b >> c;
    if (a + b < c && a - b > c)
    {
        cout << "无法构成三角形！" << endl;
    }
    else
    {
        circumference = a + b + c;
        cir = (float)circumference;
        tp = 0.5 * cir;
        area = sqrt(tp * (tp - a) * (tp - b) * (tp - c));
        printf("circumference=%.2f area=%.2f\n", circumference, area);
    }
    system("pause");
    return 0;
}