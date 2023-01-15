#include <iostream>
using namespace std;
int fun(char *a, char x)
{
    int i, j = 0;
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] != x)
        {
            a[j] = a[i];
            j++;
        }
    a[j] = '\0';
    return 0;
}
int main()
{
    char a[100];
    gets(a);
    char x;
    cin >> x;
    fun(a, x);
    puts(a);
    system("pause");
    return 0;
}