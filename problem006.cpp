#include <iostream>
using namespace std;
int main()
{
    float score1, score2, score3, total, avg = 0;
    cin >> score1 >> score2 >> score3;
    total = score1 + score2 + score3;
    avg = total / 3.0;
    printf("%.2f %.2f\n", total, avg);
    system("pause");
    return 0;
}