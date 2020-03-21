#include <stdio.h>

int main(void)
{
    int s;
    int a;
    int b;

    printf("请输入秒数：");
    int i = scanf("%d", &s);
    if (i != 1)
    {
        printf("请输入一个规范的数字!\n");
    }
    else
    {
        a = s / 60;
        b = s % 60;
        printf("\n%d分%d秒\n\n", a, b);
    }

    return 0;
}