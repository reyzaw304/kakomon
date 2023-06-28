/* recur.c*/
#include <stdio.h>
void up_and_down(int);

int main(void) {
    up_and_down(1);
    return 0;
}

void up_and_down(int N) {
    printf("Up: N=%d: Nのメモリアドレス %p¥n", N, &N); /*printf 文[1]*/
    if (N < 3)
        up_and_down(N+1);
    printf("Up: N=%d: Nのメモリアドレス %p¥n", N, &N); /*printf 文[2]*/
    
}