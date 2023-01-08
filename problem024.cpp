#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int flag = 1;
    for (int i = 100; i <= 999; i++)
    {
        flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                flag = 0;
        }
        if (flag)
        {
            sum++;
        }
    }
    cout << sum << endl;
    system("pause");
    return 0;
}