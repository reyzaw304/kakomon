#include <stdio.h>

#define N 8

struct item
{
    char name[20];
    int number[2];
};

void printitem(struct item a[], int n, int key);
void procedure(struct item a[], int n, int key);
void swap(struct item a[], int nl, int n2);

int main(void)
{
    /* 都市名^, {人口 (千人) ,政令指定都市移行年}} */
    struct item city[N] = {
        {"札幌", {1880, 1972}}, {"仙台", {1025, 1989}}, {"横浜", {579, 1956}}, {"相模原", {701, 2010}}, {"新潟", {813, 2007}}, {"名古屋", {2215, 1956}}, {"大阪", {2628, 1956}}, {"福岡", {1401, 1972}}};

    printitem(city, N, 0);
    printitem(city, N, 1);

    procedure(city, N, 0);
    printitem(city, N, 0);
    printitem(city, N, 1);

    procedure(city, N, 1);
    printitem(city, N, 0);
    printitem(city, N, 1);

    return 0;
}

void printitem(struct item a[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        printf("<%s, %d> ", a[i].name, a[i].number[key]);
    printf("\n");
}

void procedure(struct item a[], int n, int key)
{
    int i, j, k;

    for (i = n - 1; i > 0; i--)
    {
        k = i;
        for (j = 0; j < i; j++)
            if (a[k].number[key] > a[j].number[key])
                k = j;
        swap(a, i, k);
    }
}

void swap(struct item a[], int n1, int n2)
{
    struct item x;
    x = a[n1];
    a[n1] = a[n2];
    a[n2] = x;
}

// risuto 3: procedure satunya
// void procedure(struct item a[], int n, int key)
// {
//     int j, k;

//     if (n > 1)
//     {
//         k = n - 1;
//         for (j = 0; j < n - 1; j++)
//             if (a[k].number[key] > a[j].number[key])
//                 k = j;
//         swap(a, n - 1, k);
//         [イ]
//     }
// }
