#include <iostream>
using namespace std;
int main()
{
    int score[7];
    int sumA, sumB = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> score[i];
        sumA = sumA + score[i];
    }
    // cout << sumA << endl;
    int max = score[0];
    for (int i = 0; i < 7; i++)
    {
        if (max < score[i])
        {
            int temp = max;
            max = score[i];
            score[i] = temp;
        }
    }
    // cout << max << endl;
    int min = score[0];
    for (int i = 0; i < 7; i++)
    {
        if (min > score[i])
        {
            int temp = min;
            min = score[i];
            score[i] = temp;
        }
    }
    // cout << min << endl;
    sumB = sumA - max - min;
    float avg = 0;
    avg = sumB / 5;
    printf("%.2f\n", avg);
    system("pause");
    return 0;
}