#include <stdio.h>
#define EOD -1
int a[] = {1, 1, 1, EOD};

void print(int n)
{
    int i;
    printf("%d:<%d", n, a[0]);
    i = 1;
    while (a[i] != EOD)
    {
        printf(",%d", a[i]);
        i++;
    }
    printf(">\n");
}

void f1(int x[])
{
    int a = 0;
    int i = 0;
    while (x[i] != EOD)
    {
        x[i] += a;
        a++;
        i++;
    }
}
void f2(int x[])
{
    static int a = 0;
    int i = 0;
    while (x[i] != EOD)
    {
        x[i] += a;
        a++;
        i++;
    }
}
void f3(int *x)
{
    static int a = 0; // beda sama a yang diatas. atau dideclare ulang?
    while (*x != EOD)
    {
        *x += a;
        a += *x;
        x++;
    }
}

int main(void)
{
    int i, j = 1;

    for (i = 0; i < 3; i++)
        f1(a);
    print(j++); // 1:<1,4,7>

    for (i = 0; i < 3; i++)
        f2(a);
    print(j++); // 2:<10,16,22>

    for (i = 0; i < 3; i++)
        f3(a);
    print(j++); // 3:<1006,2132,4520>

    return 0;
}