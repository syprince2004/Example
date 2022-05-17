#include <stdio.h>

int main()
{
    int x1, x2, x3;
    int y1, y2, y3;

    printf("A(x, y) : ");   scanf("%d%d", &x1, &y1);
    printf("B(x, y) : ");   scanf("%d%d", &x2, &y2);
    printf("C(x, y) : ");   scanf("%d%d", &x3, &y3);

    int result = ((x1*y2 + x2*y3 + x3*y1) - (x2*y1 + x3*y2 + x1*y3)) / 2;
    printf("≥–¿Ã : %d", result);
}
