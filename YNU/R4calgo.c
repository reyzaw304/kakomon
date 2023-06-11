#include <stdio.h>
int odd(int x)
{
    return (x % 2);
}
int p(int x, int y)
{
    int a, b, c;
    a = x;
    b = y;
    c = 0;
    while (b > 0)
    {
        if (odd(b))
            c += a;
        a *= 2;
        b /= 2;
    }
    return c;
}

int q(int x, int y)
{
    int a, b, c;
    a = x;
    b = y;
    c = 0;
    int count = 1;
    while (b <= a)
        b *= 2;
    while (b > y)
    {
        c *= 2;
        // printf("%d\n", count++);
        b /= 2;
        if (b <= a)
        {
            a -= b;
            c += 1;
        }
    }
    return c;
}

int main()
{
    int x, y;
    x = 237;
    y = 185;
    printf("%i, %i, %i\n", x, y, p(x, y));
    x = 10305;
    y = 77;
    printf("%i, %i, %i\n", x, y, q(x, y));
}