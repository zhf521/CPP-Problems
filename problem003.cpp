#include <iostream>
using namespace std;
int main()
{
    char a = '0';
    while (a != EOF)
    {
        cin >> a;
        a = a + 32;
        cout << a << endl;
    }
    system("pause");
    return 0;
}