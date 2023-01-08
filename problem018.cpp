#include <iostream>
using namespace std;

int main()
{
    int n, i;
    scanf("%d", &n);
    float a[n];
    float max = 0, min = 100, avg = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
        avg += a[i];
    }
    avg /= i;
    printf("%.2f %.2f %.2f\n", max, min, avg);
    system("pause");
    return 0;
}
