#include <stdio.h>
#include <stdlib.h>

struct list {
    int key;
    struct list *next;
};

void insert(int num, struct list *p);
void delete(int num, struct list *p);
void print_list(struct list *p);

int main(void)
{
    struct list *start;
    start = (struct list *)malloc(sizeof(struct list));
    start->key = -1;
    start->next = NULL;

    insert( 5, start ); print_list(start->next);
    insert( 2, start ); print_list(start->next);
    insert( 6, start ); print_list(start->next);
    insert( 4, start ); print_list(start->next);
    // [ア]; print_list(start->next);

    delete( 2, start ); print_list(start->next);
    delete( 9, start ); print_list(start->next);
    delete( 6, start ); print_list(start->next);
    delete( 3, start ); print_list(start->next);

    insert( 1, start ); print_list(start->next);

    insert(-9, start ); print_list(start);
    insert(-1, start ); print_list(start);
    delete(-1, start ); print_list(start);

    return 0;
}

void insert(int num, struct list *p)
{
    struct list *newnode;
    while( p->next != NULL && p->next->key < num )
    p = p->next;
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->key = num;
    // [イ];
    // [ウ];
}

void delete(int num, struct list *p)
{
    struct list *delnode;
    while( p->next != NULL && p->next->key < num )
        p = p->next;
    delnode = p->next;
    if (delnode != NULL && delnode->key == num) {
        // [エ];
        free(delnode);
    }
}

void print_1ist(struct list *p)
{
    while( p != NULL ) {
        printf("<%d>", p->key);
        p = p->next;
    }
    printf("￥n");
}