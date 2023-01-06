#include <iostream>
using namespace std;
int main()
{
    float r;
    float PI = 3.1415926;
    float v;
    cin >> r;
    v = (4.0 / 3.0) * PI * (r * r * r);
    printf("%.3f\n", v);
    system("pause");
    return 0;
}