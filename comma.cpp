#include<stdio.h>
#include<string.h>
main()
{
    int x, y, j, i = 0;
    char a[1000], b[1000];
    for (i = 0; i < 1000; i++)
    {
        a[i] = '\0';
        b[i] = '\0';
    }

    scanf("%s", a);
    x = strlen(a);
    for (i = 0; i < x; i++)
        if (a[i] != '.')
            b[i] = a[i];
    y = strlen(b);
    i = 0;
    if (y % 3 == 1)
    {
        j = 1;
        y = y - j;
    }
    else if (y % 3 == 2)
    {
        j = 2;
        y = y - j;
    }
    else if (y % 3 == 0)
    {
        j = 3;
        y = y - j;
    }
    for (j; j > 0; j--)
    {
        printf("%c", b[i]);
        i++;
    }

    for (i; i <= y;)
    {
        printf(",");
        for (j = 0; j < 3; j++)
        {
            printf("%c", b[i]);
            i++;
        }
    }
    for (i; i < x; i++)
        printf("%c", a[i]);
}