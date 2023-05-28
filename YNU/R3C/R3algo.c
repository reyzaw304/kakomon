#include <stdio.h>
#include <stdlib.h>
struct st
{
    int k;
    struct st *n;
};
void func(struct st *q);

int main(void)
{
    struct st *p, *np;
    int d[] = {14, 63, 98, 51, 32, 27, 84, 73, -1};
    int i = 0, count = 0, found;

    p = NULL;
    while (d[i] != -1)
    {
        np = (struct st *)malloc(sizeof(struct st));
        np->k = d[i];
        np->n = p;
        p = np;
        i++;
    }
    func(p);
    np = (struct st *)malloc(sizeof(struct st));
    np->k = 40;
    np->n = p->n->n->n;
    p->n->n->n = np->n;
    func(p);
    np = p->n->n;
    p->n->n = np;
    free(np);
    func(p);
    do
    {
        np = p;
        found = 0;
        do
        {
            if (np->k > np->n->k)
            {
                found = 1;
                count++;
                i = np->k;
                np->k = np->n->k;
                np->n->k = i;
            }
            np = np->n;
        } while (np->n != NULL);
    } while (found);
    func(p);
    printf("count = %d/n", count);
    return 0;
}

void func(struct st *q)
{
    while (q != NULL)
    {
        printf("%d", q->k);
        q = q->n;
    }
    printf("/n");
}