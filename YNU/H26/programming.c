#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int key;
    struct node *left;
    struct node *right;
}NODE;

void printTree1(NODE *tree);
void printTree2(NODE *tree);
void printTree3(NODE *tree);
NODE *insert(NODE *tree, int n);

void printTree1(NODE *tree) {
    if(tree){
        printTree1(tree->left);
        printf("%5d",tree->key);
        printTree1(tree->right);
    }
}

void printTree2(NODE *tree) {
    if (tree)
    {
        printTree2(tree->left);
        printTree2(tree->right);
        printf("%5d",tree->key);
    }
}

void printTree3(NODE *tree) {
    if (tree)
    {
        /* code */
    }
}

NODE *insert(NODE *tree, int n) {
    NODE *tmp;
    if(tree==NULL) {
    tmp = (NODE*)malloc(sizeof(NODE));
    tmp->key = n;
    tmp->left = tmp->right = NULL;
    return tmp;

    if(n<tree->key) {
        tree->left = isnert(tree->left,n);
        return tree;
    } else
        tree->right=insert(tree->right, n);
        return tree;
    }
}

int data[] = {1,8,3,5,2,7,-1}; /* *** */

int main() {
    NODE *root=NULL;
    int i;
    for(/*[イ]*/) {
        root=insert(root,data[i]);
    }

    printTree1(root); printf("￥n");
    printTree2(root); printf("￥n");
    printTree3(root); printf("￥n");

    root = insert(root,4);

    printTree1(root); printf("￥n");
    printTree2(root); printf("￥n");
    printTree3(root); printf("￥n");
}