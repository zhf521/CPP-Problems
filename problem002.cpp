#include <iostream>
using namespace std;
int main()
{
    float bmi = 0;
    float weight, height = 0;
    cin >> weight >> height;
    bmi = weight / ((height / 100) * (height / 100));
    printf("%.2f\n", bmi);
    system("pause");
    return 0;
}