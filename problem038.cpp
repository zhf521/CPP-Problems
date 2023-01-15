#include <iostream>
using namespace std;
void fun(char *a)
{
    char *pch = NULL;
    pch = a;
    while (*pch == '*' && *pch != '\0')
    {
        pch++;
    }
    while (*pch != '\0' && pch != a)
    {
        *a = *pch;
        a++;
        pch++;
    }
    *a = '\0';
}
int main()
{
    char a[100];
    gets(a);
    fun(a);
    puts(a);
    system("pause");
    return 0;
}