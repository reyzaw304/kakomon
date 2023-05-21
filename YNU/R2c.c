#include <stdio.h>
#include <stdlib.h>

typedef struct treenode
{
    int key;
    struct treenode *left, *right;
} NODE;

NODE *newNode(int item)
{
    NODE *n = (NODE *)malloc(sizeof(NODE));
    n->key = item;
    n->left = n->right = NULL;
    return n;
}

NODE *insert(NODE *node, int item)
{
    if (node == NULL)
        return newNode(item); // jawaban
    else if (item < node->key)
    {
        node->left = insert(node->left, item); // jawaban salah tadi
    }
    else if (item > node->key)
    {
        node->right = insert(node->right, item); // jawaban salah tadi
    }
    return node;
}

void traversalOne(NODE *node)
{
    if (node != NULL)
    {
        traversalOne(node->left);  // jawaban
        printf("%d=", node->key);  // jawaban
        traversalOne(node->right); // jawaban
    }
}

void traversalTwo(NODE *node)
{
    if (node != NULL)
    {
        printf("%d=", node->key);
        traversalTwo(node->left);
        traversalTwo(node->right);
    }
}

NODE *searchSub(NODE *node, int item)
{
    if (node == NULL)
        return node;
    else if (item < node->key)
        return searchSub(node->left, item); // jawaban
    else if (item > node->key)
        return searchSub(node->right, item); // jawaban
    else
        return node; // jawaban
}

void search(NODE *node, int item)
{
    if (searchSub(node, item) != NULL)
        printf("%d is found.\n", item);
    else
        printf("%d is not found.\n", item);
}

#define EOD -1
int a1[] = {1, 8, 3, 5, 2, 8, 4, 9, EOD};
int a2[] = {7, 2, 9, 1, 6, 9, 8, 1, EOD};

int main(int argc, char *argv[])
{
    NODE *tree1 = NULL, *tree2 = NULL;
    int i;
    for (i = 0; a1[i] != EOD; i++)
        tree1 = insert(tree1, a1[i]);
    for (i = 0; a2[i] != EOD; i++)
        tree2 = insert(tree2, a2[i]);
    traversalOne(tree1);
    printf("\n");
    traversalTwo(tree2);
    printf("\n");
    search(tree1, 9);
    search(tree2, 4);
}