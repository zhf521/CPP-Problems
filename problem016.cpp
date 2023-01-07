#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0)
    {
        if (a == b == c)
        {
            cout << "Equilateral triangle!" << endl;
        }
        else if (a == b || a == c || b == c)
        {
            cout << "Isosceles triangle!" << endl;
        }
        else
        {
            cout << "Ordinary triangle!" << endl;
        }
    }
    else
    {
        cout << "Not a triangle!" << endl;
    }
    system("pause");
    return 0;
}