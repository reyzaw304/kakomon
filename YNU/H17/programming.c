#include <stdio.h>
#define DISK_NUM 3

void hanoi(int n, char* a, char* b, char* c) {
    if (0==n) return;

    hanoi(n-1, a, c, b);
    printf("%4s -> %4s ￥n", a, b);
    hanoi(n-1, c, b, a);
}

int main() {
    int n = DISK_NUM;
    hanoi(n, "src", "dst", "work");
    return 0;
}