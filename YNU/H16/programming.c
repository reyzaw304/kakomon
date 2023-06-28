#include <stdio.h>

#define N 8
int a[N] = {3, 1, 5, 8, 2, 6, 7, 4};

void sort(int [], int, int);
void swap(int [], int, int);

main ()
{
    sort(a, 0, N-1);
}

void sort(int a[], int L, int R)
{
    int i, j, part;

    i = L;
    j = R;
    part = a[(L+R)/2]; /*1*/

    do
    {
        while (a[i] < part) /*2*/
            i++;
        while (part < a[j]) /*3*/
            j--;
        
        if (i <= j)
        {
            swap(a, i, j);
            i++;
            j--;
        }
        
    } while (i <= j);
    
    if (L < j) sort(a, /*_(A)_, _(B)_*/);
    if (i < R) sort(a, /*_(C)_, _(D)_*/);
}

void swap(int a[], int x, int y)
{
    int temp;

    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
    printf("(%d, %d)￥n", x, y);
}