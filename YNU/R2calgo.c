#include <stdio.h>
#define EOD -1
int a[] = {1, 1, 1, EOD};

void print(int);
void f1(int[]);
void f2(int[]);
void f3(int[]);

int main(void)
{
    int i, j = 1;

    for (i = 0; i < 3; i++)
        f1(a);
    print(j++);

    for (i = 0; i < 3; i++)
        f2(a);
    print(j++);

    for (i = 0; i < 3; i++)
        f3(a);
    print(j++);

    return 0;
}

void print(int n)
{
    int i;
    printf("%d:<%d", n, a[0])
        i = 1;
    while (a[i] != EOD)
    {
        printf(",%d", a[i]);
        i++;
    }
    printf(">¥n");
}
