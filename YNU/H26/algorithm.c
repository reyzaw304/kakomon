#include<stdio.h>
#define WX 3
#define WY 3

int map[WY][WX];
int n1=1, n2=0, n3=0;

void init_map(void);
void disp_map(void);
void search( int x, int y);

int main(void)
{
    init_map();
    search(0, 0);
    disp_map();
    printf("n2=%d, n3=%d￥n", n2, n3);
    return 0;
}

void search( int x, int y )
{
    n2++;
    if(x>=0 && x<WX && y>=0 && y<WY && map[y][x]==0 ){
        map[y][x] = n1;
        n1++;
        search( x, y-1); /*上*/
        search( x+1, y); /*右*/
        search( x, y+1); /*下*/
        search( x-1, y); /*左*/
    } else n3++;
}

void init_map(void)
{
    int x, y;
    for(y=0;y<WY;y++)
        for(x=0;x<WX;x++)
            map[y][x] = 0;
    map[1][2] = -1;
    map[1][1] = 0;
}
void disp_map(void)
{
    int x, y;
    for(y=0;y<WY;y++) {
        for(x=0;x<WX;x++)
            printf("%3d", map[y][x]);
        prinf("￥n");
    }
}