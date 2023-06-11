#include <stdio.h>
#include <stdlib.h>
struct list
{
    int key;
    struct list *next;
};
struct list *func1(void);
void func2(struct list *p);
void func3(struct list *x, struct list *p);
int func4(void);
#define EOD -1
int a[] = {1, 2, 3, 4, 5, 6, EOD};
int main(void)
{
    struct list *p, *p2;
    p = func1();
    p2 = (struct list *)malloc(sizeof(struct list));
    p2->key = 10;
    p2->next = (struct list *)malloc(sizeof(struct list));
    p2->next->key = 20;
    p2->next->next = NULL;
    func2(p);
    func2(p2);
    func3(p2->next, p->next);
    func2(p->next);
    func2(p2);
    return 0;
}
struct list *func1(void)
{
    int d;
    struct list *p, *newp;
    p = NULL;
    while ((d = func4()) != EOD)
    {
        newp = (struct list *)malloc(sizeof(struct list));
        newp->key = d;
        newp->next = p;
        p = newp;
    }
    return p;
}
void func2(struct list *p)
{
    while (p != NULL)
    {
        printf("<%d>", p->key);
        p = p->next;
    }
    printf("\n");
}
void func3(struct list *x, struct list *p)
{
    struct list tmp;
    tmp = *x;
    *x = *p;
    *p = tmp;
    p->next = x;
}
int func4(void)
{
    static int i = 0;
    return a[i++];
}
