#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 2019; i++)
    {
        if (i % 10 == 9)
        {
            sum++;
            continue;
        }
        else if ((i / 10) % 10 == 9)
        {
            sum++;
            continue;
        }
        else if ((i / 100) % 10 == 9)
        {
            sum++;
            continue;
        }
    }
    cout << sum << endl;
    system("pause");
    return 0;
}