#include <iostream>
#include <string.h>
using namespace std;
int fun(char *a)
{
    int len = strlen(a);
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char a[100];
    gets(a);
    if (fun(a))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    system("pause");
    return 0;
}