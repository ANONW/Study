#include <math.h>
#include <stdio.h>

int PRIME(int object);

int main(void)
{
    int object;

    while (1)
    {
        printf("\n请输入一个自然数：");
        scanf("%d", &object);

        if (object <= 1)
            printf("\n请输入一个大于1的自然数！\n");
        else
            PRIME(object);
    }

    return 0;
}

int PRIME(int object)
{
    int i = 0;                              //声明一个变量 i
    for (int n = 2; n <= sqrt(object); n++) //若判定为整除 -› i++
    {
        if (object % n == 0)
            i++;
    }
    if (i == 0)
    {
        printf("\n%d是素数。\n", object);
    }
    else
    {
        printf("\n%d是合数。\n", object);
    }
    //检验 i 的值是否为0
    return 0;
}