#include <stdio.h>
#define N (3)
char a[N] = {'a', 'b', 'c'};

main()
{
    perm(a, N);
}

perm(char a[], int n)
{
    int i;

    if (n <= 1)
        print_a(a, N);
    else
        for(i=0; i<n; i++) {
            swap(a, i, n-1);
            perm(a, /* _(A)_*/);
            swap(a, /* _(B)_, _(C)_*/);
        }
}

swap(char a[], int i, int j)
{
    char c;

    c = a[i];
    a[i] = /*_(D)_*/;
    a[j] = /*_(E)_*/;
}

print_a(char a[], int n)
{
    int i;

    printf("%c", a[0]);
    for (i = 1; i < n; i++)
        printf(" %c", a[i]);
    printf("\n");
}