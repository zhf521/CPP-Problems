#include <iostream>
using namespace std;
int main()
{
    char a = '0';
    cin >> a;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {

            cout << " ";
        }
        for (int m = 0; m < i; m++)
            cout << a << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}