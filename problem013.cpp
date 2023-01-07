#include <iostream>
using namespace std;
int main()
{
    char ch;
    int sumA, sumB = 0;
    while ((ch = getchar()) != '0' && (ch != EOF))
    {
        if (ch == 'A')
        {
            sumA++;
        }
        if (ch == 'B')
        {
            sumB++;
        }
    }
    if (sumA > sumB)
    {
        cout << 'A' << endl;
    }
    if (sumA < sumB)
    {
        cout << 'B' << endl;
    }
    else
    {
        cout << 'E' << endl;
    }
    system("pause");
    return 0;
}