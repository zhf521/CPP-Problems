#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int a, b, c, d = 0; // a,b,c,d表示个、十、百、千
    a = n % 10;
    b = n % 100 / 10;
    c = n % 1000 / 100;
    d = n / 1000;
    cout << a << b << c << d << endl;
    system("pause");
    return 0;
}